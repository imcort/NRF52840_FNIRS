
#include "app_util_platform.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "boards.h"
#include "app_error.h"
#include <string.h>

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "transfer_handler.h"
#include "ads1258.h"
#include "a5133.h"

void uart_event_handle(app_uart_evt_t * p_event)
{
    uint8_t receive_char;

    switch (p_event->evt_type)
    {
        case APP_UART_DATA_READY:
            UNUSED_VARIABLE(app_uart_get(&receive_char));
            //gy95_process(receive_char);
            break;

        default:
            NRF_LOG_INFO("BMD101 Error %d", p_event->data.error_communication );
            break;
    }
}

void a5133_receive_evt_handler(uint8_t* payload, uint8_t len)
{

}

int main(void)
{
    
    APP_ERROR_CHECK(NRF_LOG_INIT(NULL));
    NRF_LOG_DEFAULT_BACKENDS_INIT();
    a5133_begin();
    ads1258_begin();
    
    ads1258_ppi_recv_start();

    NRF_LOG_INFO("SPI example started.");

    while (1)
    {
        a5133_process(); 
        NRF_LOG_FLUSH();
        __WFE();
        
    }
}
