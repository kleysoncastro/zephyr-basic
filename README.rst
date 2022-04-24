# Blink led 

### led4 gpiod 8

```
/ {
       leds {
		compatible = "gpio-leds";
		external_led_7: led_3 {
			gpios = <&gpiod 8 GPIO_ACTIVE_HIGH>;
			label = "User LD7";
		};
		
	};

	aliases {
		led4 = &external_led_7;

	};
};

```