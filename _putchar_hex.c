#include "main.h"
/**
 * _putchar_hex - This prints hexadecimal values
 * @value: The values to be printed
 * @uppercase: The order of printing
 * Return: values
 */
int _putchar_hex(unsigned int value, int uppercase)
{
	char buffer[20];
	int printed_chars = 0;

	if (uppercase)
		sprintf(buffer, "%X", value);
	else
		sprintf(buffer, "%x", value);
	printed_chars = _putstr(buffer);
	return (printed_chars);
}
