#include "main.h"

/**
 * binary_to_uint - converts binary numbers to integers
 * @b: pointer to a string containing a binary number.
 * Return: the converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, j, sum, pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == 0)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - '0');
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = len - 1; j >= 0; j--)
		pow = pow * base;
		sum = sum + (pow * (b[i] - '0'));
		len--;
		pow = 1;
	}
	return (sum);
}
