#include "main.h"
/**
 * _putchar_ptr - This prints pointer values
 * @addr: The pointer values
 * Return: values
 */
int _putchar_ptr(void *addr)
{
	char buffer[20];
	int printed_chars = 0;

	sprintf(buffer, "%p", addr);
	printed_chars = _putstr(buffer);
	return (printed_chars);
}
