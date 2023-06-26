#include "main.h"
/**
 * _putchar_oct - prints octal numbers
 * @value: value
 * Return: value
 */
int _putchar_oct(unsigned int value)
{
	char buffer[20];
	int printed_chars = 0;

	sprintf(buffer, "%o", value);
	printed_chars = _putstr(buffer);
	return (printed_chars);
}
