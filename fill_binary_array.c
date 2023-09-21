#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int s;

	for (s = 0; s < limit; s++)
		binary[s] = '0';
	binary[limit] = '\0';
	for (s = limit - 1; int_in > 1; s--)
	{
		if (int_in == 2)
			binary[s] = '0';
		else
			binary[s] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[s] = '1';
	if (isneg)
	{
		for (s = 0; binary[s]; s++)
			if (binary[s] == '0')
				binary[s] = '1';
			else
				binary[s] = '0';
	}
	return (binary);
}

