#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: nu,ber of arguments
 * @argv: arrays of arguments
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
