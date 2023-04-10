#include <stdio.h>
#include <stdlib.h>
i#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 *@str: array str
 *Return: always 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through all the array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*atoi -> convert string to integer*/
			sum += str_to_int;
		}
		else
		{
			printf("error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*this would print sum*/
	return (0);
}
