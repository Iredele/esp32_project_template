#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "main";

void app_main(void)
{
    ESP_LOGI(TAG, "Hello, ESP-IDF!");

    while (1) {
        ESP_LOGI(TAG, "Looping...");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}