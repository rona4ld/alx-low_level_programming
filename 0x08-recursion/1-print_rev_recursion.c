#include "main.h"

/**
 * put_rev - prints a string in reverse
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0') 
    	{
	    _print_rev_recursion(s + 1);
	    _putchar(*s);
    	}
}
