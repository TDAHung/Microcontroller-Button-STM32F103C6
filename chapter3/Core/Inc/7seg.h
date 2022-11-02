/*
 * 7seg.h
 *
 *  Created on: Oct 27, 2022
 *      Author: Mr.HUNG
 */

#ifndef INC_7SEG_H_
#define INC_7SEG_H_

#include "main.h"
#include <stdlib.h>

void init_led7(const uint16_t* en, const uint16_t* port, uint8_t* buffer, unsigned int no_led7);
void display_7SEG(unsigned int index);

#endif /* INC_7SEG_H_ */
