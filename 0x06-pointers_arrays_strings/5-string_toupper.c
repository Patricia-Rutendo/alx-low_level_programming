#include "main.h"
/**
 * string_toupper -converts all lowercase characters in a string to uppercase.
 * @str: pointer to the string to be converted
 *
 * Return: The converted string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

