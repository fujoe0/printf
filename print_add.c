#include "main.h"

/**
 * print_bnr - prints decimal in binary
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_bnr(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input, count, x, first_one, isnegative;
	char *bin;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_binary_array(bin, int_input, isnegative, 32);
	first_one = 0;
	for (count = x = 0; bin[x]; x++)
	{
		if (first_one == 0 && bin[x] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuf = handl_buf(buf, bin[x], ibuf);
			count++;
		}
	}
	free(bin);
	return (count);
}

