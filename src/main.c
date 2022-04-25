
#include <zephyr.h>
#include <drivers/gpio.h>
/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000


/* The devicetree overlay file stm32f411e_disco.overlay identifier for the "led4" alias. */
#define LED0_NODE DT_ALIAS(led0)
#define led2 2

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

void main(void) {
 
	int ret;

	if (!device_is_ready(led.port)) {
		return;
	}

	ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return;
	} 

	while (1) {
	 	ret = gpio_pin_toggle_dt(&led);
		if (ret < 0) {
			return;
		} 
		k_msleep(SLEEP_TIME_MS);
	}
}
