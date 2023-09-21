#include "main.h"

/**
 * fill_long_oct_array - calculates a long octal number
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_long_oct_array(char *bnr, char *oct)
{
	int s, a, j, ioct, limit;

	oct[22] = '\0';
	for (a = 63, ioct = 21; a >= 0; a--, ioct--)
	{
		if (a > 0)
			limit = 4;
		else
			limit = 1;
		for (s = 0, j = 1; j <= limit; j *= 2, a--)
			s = ((bnr[a] - '0') * j) + s;
		a++;
		oct[ioct] = s + '0';
	}
	return (oct);
}

