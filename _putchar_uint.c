#include "main.h"
/**
 * _putchar_uint - The prints unsigned integers
 * @value: The unsigned integer value
 * Return: value
 */
int _putchar_uint(unsigned int value)
{
	char buffer[20];
	int printed_chars = 0;

	sprintf(buffer, "%u", value);
	printed_chars = _putstr(buffer);
	return (printed_chars);
}
