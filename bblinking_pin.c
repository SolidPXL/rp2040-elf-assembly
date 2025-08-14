#include "pico/stdlib.h"

#define LED_PIN 8

int main() {
    // Initialize the standard IO (optional, only needed if you want USB serial output)
    stdio_init_all();

    // Initialize the GPIO
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        gpio_put(LED_PIN, 1);  // Turn ON
        //sleep_ms(1000);        // Wait 1 second
        gpio_put(LED_PIN, 0);  // Turn OFF
        //sleep_ms(1000);        // Wait 1 second
    }
}
