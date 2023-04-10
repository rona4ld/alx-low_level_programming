#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is return and error is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
