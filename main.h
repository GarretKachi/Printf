#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int handle_integer_specifiers(const char* format, va_list args);
int _putchar_int(int value);
int _putchar_uint(unsigned int value);
int _putstr(const char *str);
int _putchar_hex(unsigned int value, int uppercase);
int _putchar_int(int value);
int _putchar_oct(unsigned int value);
int _putchar_ptr(void *addr);

#endif
