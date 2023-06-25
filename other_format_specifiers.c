#include "main.h"
int other_format_specifiers(char specifier, va_list args);
/**
 * other_format_specifiers - checks for other specifiers
 * @specifier: specifier to check for
 * @args: variable list of specifiers
 * Return: specifier
 */
int other_format_specifiers(char specifier, va_list args)
{
	int printed_chars = 0;
	unsigned int num;
	void *ptr;

	switch (specifier)
	{
		case 'p':
		{
			ptr = va_arg(args, void*);
			printed_chars += printf("%p", ptr);
			break;
		}
		case 'd':
		case 'i':
		{
			num = va_arg(args, int);
			printed_chars += printf("%d", num);
			break;
		}
		case 'u':
		{
			num = va_arg(args, unsigned int);
			printed_chars += printf("%o", num);
			break;
		}
		case 'x':
		{
			num = va_arg(args, unsigned int);
			printed_chars += printf("%x", num);
			break;
		}
		case 'X':
		{
			num = va_arg(args, unsigned int);
			printed_chars += printf("%X", num);
			break;
		}
		default:
			_putchar('%');
			_putchar(specifier);
			printed_chars += 2;
			break;
	}
	return (printed_chars);
}
