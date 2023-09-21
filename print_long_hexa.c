#include "main.h"
/**
 * prinlhex - prints a long decimal in hexadecimal
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int prinlhex(va_list arguments, char *buf, unsigned int ibuf)
{
	long int int_input, i, isnegative, count, first_digit;
	char *hexa, *bin;

	int_input = va_arg(arguments, long int);
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

	bin = malloc(sizeof(char) * (64 + 1));
	bin = fill_binary_array(bin, int_input, isnegative, 64);
	hexa = malloc(sizeof(char) * (16 + 1));
	hexa = fill_hex_array(bin, hexa, 0, 16);
	for (first_digit = i = count = 0; hexa[i]; i++)
	{
		if (hexa[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, hexa[i], ibuf);
			count++;
		}
	}
	free(bin);
	free(hexa);
	return (count);
}

