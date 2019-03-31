#ifndef __S5APP6_WRITER_H
#define __S5APP6_WRITER_H

#include "mbed.h"
#include "rtos.h"
#include "trame.h"

Ticker sendBit_tick;
Thread write_th;

extern char tick;

void
write(void);

void
bit_ready_interupt(void);



#endif