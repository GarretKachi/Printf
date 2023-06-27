#include "main.h"
/**
 * _putstr - This goes through each character
 * @str: The string to traverse
 * Return: values
 */
int _putstr(const char *str)
{
	int printed_chars = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (_putchar(str[i]) == -1)
		{
			return (-1);
		}
		printed_chars++;
	}
	return (printed_chars);
}
