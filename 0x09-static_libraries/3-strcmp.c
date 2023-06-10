#include "main.h"
/**
 * _strcmp - compare string values
 * @str1: input value
 * @str2: input value
 *
 * Return: str1[i] - str2[i]
 */
int _strcmp(char *str1, char *str2)
{
	int t;


	t = 0;
	while (str1[t] != '\0' && str2[t] != '\0')
	{
		if (str1[t] != str2[t])
		{
			return (str1[t] - str2[t]);
		}
	t++;
	}
	return (0);
}

