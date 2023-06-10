#include "main.h"

/**
 * _strchr - entry point of a character in a string.
 * @str: string.
 * @c: character.
 *
 * Return: s + index and \n.
 */
char *_strchr(char *str, char c)
{
	int index = 0;

	while (str[index] >= '\0')
	{
		if (str[index] == c)
		{
			return (str + index);
		}
		index++;
	}

	return ('\0');
}

