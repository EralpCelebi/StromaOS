#pragma once

#include <sys/cdefs.h>
#include <limits.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
 
void printf(const char* __restrict__ format, ...);
void putchar(char c);
void puts(const char* string);
void setprint(uint8_t targ);

#define MONITOR 0
#define SERIAL 1
