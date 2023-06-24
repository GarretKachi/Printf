#include "main.h"
/**
 * _printf - printfs formated output to stdout
 * @format: format specifier
 * Return: printed output
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			++i;
			printed_chars += process_format_specifier(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			++printed_chars;
		}
	}
	va_end(args);
	return (printed_chars);
}
