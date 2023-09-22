#include "main.h"

/**
 * print_rev - writes the str in reverse
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *string;
	unsigned int x;
	int y = 0;
	char nill[] = "(llun)";

	string = va_arg(arguments, char *);
	if (string == NULL)
	{
		for (x = 0; nill[x]; x++)
			ibuf = handl_buf(buf, nill[x], ibuf);
		return (6);
	}
	for (x = 0; str[x]; x++)
		;
	y = x - 1;
	for (; y >= 0; y--)
	{
		ibuf = handl_buf(buf, str[y], ibuf);
	}
	return (x);
}

