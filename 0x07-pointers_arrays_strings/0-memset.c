#include "main.h"

/**
 * _memset - function is to fill memory with a constant byte
 * @s with the constant byte 
 * @n: bytes of the memory 
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
