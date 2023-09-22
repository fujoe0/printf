#include "main.h"

/**
 * prinpint - print integer with plus symbol
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int prinpint(va_list arguments, char *buf, unsigned int ibuf)
{
	int input;
	unsigned int int_in, int_temporary, s, div;

	input = va_arg(arguments, int);
	if (input < 0)
	{
		int_in = input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		int_in = input;
		ibuf = handl_buf(buf, '+', ibuf);
	}
	int_temporary = int_in;
	div = 1;
	while (int_temporary > 9)
	{
		div *= 10;
		int_temporary /= 10;
	}
	for (s = 0; div > 0; div /= 10, s++)
	{
		ibuf = handl_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (s + 1);
}

