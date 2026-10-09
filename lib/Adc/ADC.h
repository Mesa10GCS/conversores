#ifndef ADC_H
#define ADC_H

#include "stm32f103xb.h"
#include "stdint.h"

void adc_init(void);
uint16_t adc_read(unsigned int canal);


#endif