#include "main.h"
/**
 * leet - encode into 1337speak
 * @x: input value
 * Return: x value
 */
char *leet(char *x)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == str1[j])
			{
				x[i] = str2[j];
			}
		}
	}
	return (x);
}

