#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - printf the min number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of argumenets
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
