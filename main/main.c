/*
@file    main.c
@brief   Main file for ESP-IDF ESP32 example
@version 1.0
@date    2023-04-16
@author  Rudolph Riedel
*/

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#include <nvs.h>
#include <nvs_flash.h>


#include "esp_timer.h"
#include "EVE.h"
#include "tft.h"


#define TAG "MAIN"


void init_nvs_keys(void){
	/*------------------------------------------------*/
	ESP_LOGI(TAG,"Init NVS keys of data");

	esp_err_t err = nvs_flash_init();
	if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
		ESP_ERROR_CHECK(nvs_flash_erase());
		err = nvs_flash_init();
	}
    ESP_ERROR_CHECK(err);
	
	ESP_LOGI(TAG,"NVS keys init succsesfull\r\n");
	return;
}



void app_main()
{
    // uint32_t current_millis;
    // uint32_t previous_millis = 0;
    // uint8_t display_delay = 0;
    // uint32_t micros_start, micros_end;
    init_nvs_keys();

    EVE_init_spi();
    ESP_LOGI(TAG, "END INIT SPI");


    TFT_init();

    ESP_LOGI(TAG, "END INIT TFT");
}


    // uint32_t num = 0;
    // while(1)
    // {
    //     vTaskDelay(pdMS_TO_TICKS(10));
        

    //    	current_millis = (uint32_t) (esp_timer_get_time() / 1000ULL);

    //     if((current_millis - previous_millis) > 4) /* execute the code every 5 milli-seconds */
    //     {
    //         num ++;
    //         previous_millis = current_millis;

    //         micros_start = (uint32_t) (esp_timer_get_time());
    //         //TFT_touch();
    //         micros_end = (uint32_t) (esp_timer_get_time());
    //         num_profile_b = (micros_end - micros_start); /* calculate the micro-seconds passed during the call to TFT_touch */

    //         display_delay++;
    //         if(display_delay > 3) /* refresh the display every 20ms */
    //         {
    //             display_delay = 0;
    //             micros_start = (uint32_t) (esp_timer_get_time());
    //             TFT_display();
    //             micros_end = (uint32_t) (esp_timer_get_time());
    //             num_profile_a = (micros_end - micros_start); /* calculate the micro-seconds passed during the call to TFT_display */
    //             if (num%100==0){
    //                 ESP_LOGI("MAIN","num : %lu", num);
    //             }
    //         }
    //     }

    // vPortYield();
    // }
