
#include "bldc.h"

#include <linux/printk.h>
#include <linux/atomic.h>

//TODO Headers.


typedef struct {
	uint8_t dir_pin;
	uint8_t pg_pin;
	const char* pg_label;
	int pg_irq;
	dir_t dir;
	atomic64_t pulse_cnt;
} bldc_t;
static bldc_t bldc[] = {
	{
		17, // GPIO17, pin 11
		16, // GPIO16, pin 36
		"irq_gpio16",
		CW,
		0
	}
};


int bldc__init(void) {
	int result;
	bldc__ch_t ch;
	
	for(ch = 0; ch < BLDC__N_CH; ch++){
		//TODO Init direction pin
		
		//TODO Init timer
		
		//TODO Init IRQ
	}
	
	
	return 0;
}

void bldc__exit(void) {
	//TODO gpio_free() IRQ pin
}


void bldc__set_dir(bldc__ch_t ch, dir_t dir) {
	// TODO Save and set direction @ GPIO17, pin 11
}

void bldc__set_duty(bldc__ch_t ch, u16 duty_permille) {
	// TODO For SW PWM @ GPIO24, pin 18
}

void bldc__get_pulse_cnt(bldc__ch_t ch, int64_t* pulse_cnt) {
	// TODO For pulse count @ GPIO16, pin 36
}
