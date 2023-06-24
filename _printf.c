#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: length of formatted output
 * Return: formated output to stdout
 */
int _printf(const char *format, ...)
{
	int i, j, ch, printed_chars = 0;
	char *str;

	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			++i;

			switch (format[i])
			{
				case 'c':
					{
						ch = va_arg(args, int);
						_putchar(ch);
						++printed_chars;
						break;
					}

				case 's':
					{
						str = va_arg(args, char*);
						for (j = 0; str[j] != '\0'; j++)
						{
							_putchar(str[j]);
							++printed_chars;
						}
						break;
					}
				case '%':
					{
						_putchar('%');
						++printed_chars;
						break;
					}
				default:
					{
						_putchar('%');
						_putchar(format[i]);
						printed_chars += 2;
						break;
					}
			}
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
