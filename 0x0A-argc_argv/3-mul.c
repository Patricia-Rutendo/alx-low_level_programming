#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int i, j, n, len, r, digit;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	r = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (i < len && r == 0)
	{
		if (str[i] == '-')
			++j;

		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			r = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
			r = 0;
		}
		i++;
	}

	if (r == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

