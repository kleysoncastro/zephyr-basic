# Blink led 

### Blink led com placas stm32f4  e esp32

#### stm32f411e pino externo `gpiod` pin 8.
#### esp32 pino exerno `gpio0` pin 2.

Placa stm32f411e led4 gpiod 8 | esp32 gpio0 2

Estes exemplo foi testado com `stm32f411e` e  `esp32`
Placa pata teste futuro `stm32f103`.


```sh 

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

