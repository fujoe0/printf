#include "main.h"

/**
 * fill_short_oct_array - calculates a short octal number
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */
char *fill_short_oct_array(char *bnr, char *oct)
{
	int s, x, j, ioct, limit;

	oct[6] = '\0';
	for (x = 15, ioct = 5; x >= 0; x--, ioct--)
	{
		if (x > 0)
			limit = 4;
		else
			limit = 1;
		for (s = 0, j = 1; j <= limit; j *= 2, x--)
			s = ((bnr[x] - '0') * j) + s;
		x++;
		oct[ioct] = s + '0';
	}
	return (oct);
}

