/*
 * traffic.h
 *
 *  Created on: Nov 2, 2022
 *      Author: Mr.HUNG
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

#include "main.h"
#include <stdlib.h>
#include "timer.h"

typedef enum {
	VER_RED,
	VER_GREEN,
	VER_YELLOW,
	HOR_RED,
	HOR_GREEN,
	HOR_YELLOW

} TrafficArrayAccess;

typedef enum {
	TRAFFIC_VER_TIMER,
	TRAFFIC_HOR_TIMER
} TimerSecArrayAccess;

void init_traffic(const uint16_t* port, uint8_t* time, uint8_t* timeUpdate);
void traffic_display(void);
void clearTraffic(void);
uint8_t getUpdateFlag(void);
void updateNextPeriod(void);
void copyArray(uint8_t* from, uint8_t* to, int n);

#endif /* INC_TRAFFIC_H_ */
