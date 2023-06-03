#include "main.h"
/**
 *  _strcmp - compares two string values
 * @str1: The first string to be compared
 * @str2: The second string to be compared
 *
 * Return: The difference between the strings
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

