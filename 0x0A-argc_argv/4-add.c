#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 * @str: string to check
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - adds up the command line arguments that are numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* atoi converts a string to an integer */
			sum += str_to_int;
		}
		else
		{
			printf("Error: Argument %d is not a number\n", count);
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);
	return (0);
}
