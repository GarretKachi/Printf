#include "main.h"
int _printf(const char *format, ...);
/**
 * _printf - prints formatted output to stdout
 * @format: length of formatted output
 * Return: formated output to stdout
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	int i;
	char ch, *str;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					ch = va_arg(args, int);
					printed_chars += _putchar(ch);
					break;
				}
				case 's':
				{
					str = va_arg(args, char *);
					printed_chars += _putstr(str);
					break;
				}
				case 'd':
				case 'i':
				case 'u':
				case 'x':
				case 'X':
				case 'o':
				case 'p':
				{
					printed_chars += handle_integer_specifiers(&format[i], args);
					break;
				}
				case '%':
				{
					printed_chars += _putchar('%');
					break;
				}
				default:
				{
					printed_chars += _putchar('%');
					printed_chars += _putchar(format[i]);
					break;
				}
			}
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
	}
	va_end(args);
	return (printed_chars);
}
