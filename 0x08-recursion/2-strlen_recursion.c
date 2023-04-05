#include "main.h"
/**
 * _dtrlen_recursion - returns of a string.
 * @s: pointer to string.
 *Return: lenght of string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
