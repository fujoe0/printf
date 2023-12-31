#include "main.h"

/**
 * fill_hex_array - writes the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @hex: array where is stored the hexadecimal.
 * @isupp: integer that determines if the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit: size of hex
 * Return: binary array.
 */
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int s, i, j, toalphabet;

	hex[limit] = '\0';
	if (isupp)
		toalphabet = 55;
	else
		toalphabet = 87;
	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (s = 0, j = 1; j <= 8; j *= 2, i--)
			s = ((bnr[i] - '0') * j) + s;
		i++;
		if (s < 10)
			hex[i / 4] = s + 48;
		else
			hex[i / 4] = s + toalphabet;
	}
	return (hex);
}

