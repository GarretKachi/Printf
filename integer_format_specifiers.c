#include "main.h"
int handle_integer_specifiers(const char *format, va_list args);
/**
 * handle_integer_specifiers - This handles specifiers for integers and pointers
 * @format: The specifier format
 * @args: The argument list
 * Return: specifier
 */
int handle_integer_specifiers(const char *format, va_list args)
{
	int printed_chars = 0;
	int value;
	unsigned int uvalue;
	void *addr;

	switch (*format)
	{
		case 'd':
		case 'i':
			value = va_arg(args, int);
			printed_chars = _putchar_int(value);
			break;
		case 'u':
			uvalue = va_arg(args, unsigned int);
			printed_chars = _putchar_uint(uvalue);
			break;
		case 'x':
			uvalue = va_arg(args, unsigned int);
			printed_chars = _putchar_hex(uvalue, 0);
			break;
		case 'X':
			uvalue = va_arg(args, unsigned int);
			printed_chars = _putchar_hex(uvalue, 1);
			break;
		case 'o':
			uvalue = va_arg(args, unsigned int);
			printed_chars = _putchar_oct(uvalue);
			break;
		case 'p':
			addr = va_arg(args, void*);
			printed_chars = _putchar_ptr(addr);
			break;
		default:
			_putchar('%');
			_putchar(*format);
			printed_chars += 2;
			break;
	}

	return (printed_chars);
}

