#include "main.h"
/**
 * process_format_specifier - checks cases for formats specifiers
 * @specifier: format specifier
 * @args: variable arguments
 * Return: specifier
 */
int process_format_specifier(char specifier, va_list args)
{
	int j, ch, printed_chars = 0;
	char *str;

	switch (specifier)
	{
		case 'c':
		{
			ch = va_arg(args, int);
			_putchar(ch);
			return (1);
		}
		case 's':
		{
			str = va_arg(args, char*);
			for (j = 0; str[j] != '\0'; ++j)
			{
				_putchar(str[j]);
				++printed_chars;
			}
			return (printed_chars);
		}
		case '%':
		{
			_putchar('%');
			return (1);
		}
		default:
		{
			_putchar('%');
			_putchar(specifier);
			return (2);
		}
	}
}
