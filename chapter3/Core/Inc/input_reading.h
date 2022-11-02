/*
 * input_reading.h
 *
 *  Created on: Oct 26, 2022
 *      Author: Mr.HUNG
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"
#include <stdlib.h>

void init_button_reading(const uint16_t* port, unsigned int no_buttons);
void button_reading(void);
unsigned char is_button_pressed(uint8_t index);


#endif /* INC_INPUT_READING_H_ */
