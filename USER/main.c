#include "stm32f10x.h"                  // Device header
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

int main(void) {
    LED_Init();
	delay_init(72);
	while(1) {

		PBout(5) = ~PBout(5);
		PEout(5) = ~PEout(5);
		delay_ms(500);
	}

	return 0;
}
