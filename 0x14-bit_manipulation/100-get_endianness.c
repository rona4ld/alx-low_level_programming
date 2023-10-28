#include "main.h"
/**
 * get_endianness - checks the edianness.
 * Reteurn: 0 if big endianessn, 1 if little endianness
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *) &a;
	return (*b);
}
