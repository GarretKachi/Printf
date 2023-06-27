#include "main.h"
/**
 * _putchar_oct - This prints octal numbers
 * @value: value
 * Return: value as is
 */
int _putchar_oct(unsigned int value)
{
	char buffer[20];
	int printed_chars = 0;

	sprintf(buffer, "%o", value);
	printed_chars = _putstr(buffer);
	return (printed_chars);
}
