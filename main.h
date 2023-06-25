#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int process_format_specifier(char specifier, va_list args);
int other_format_specifiers(char specifier, va_list args);

#endif
