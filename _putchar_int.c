#include "main.h"
/**
 * _putchar_int - This prints integer values
 * @value: The integer value
 * Return: value
 */
int _putchar_int(int value)
{
	char buffer[20];
	int printed_chars = 0;

	sprintf(buffer, "%d", value);
	printed_chars = _putstr(buffer);
	return (printed_chars);
}
