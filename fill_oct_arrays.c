#include "main.h"

/**
 * fill_oct_array - writes the character c to stdout
 *
 * @bnr: array where its stored the binary.
 * @oct: array where its stored the octal.
 *
 * Return: binary array.
 */
char *fill_oct_array(char *bnr, char *oct)
{
	int s, i, j, ioct, limit;

	oct[11] = '\0';
	for (i = 31, ioct = 10; i >= 0; i--, ioct--)
	{
		if (i > 1)
			limit = 4;
		else
			limit = 2;
		for (s = 0, j = 1; j <= limit; j *= 2, i--)
			s = ((bnr[i] - '0') * j) + s;
		i++;
		oct[ioct] = s + '0';
	}
	return (oct);
}

