#include "main.h"

/**
 * _strpbrk - entry point for a string for any set of bytes.
 * @str: input string.
 * @accept: input set of bytes.
 *
 * Return: str and \n
 */
char *_strpbrk(char *str, char *accept)
{
	int index;

	while (*str)
	{
		index = 0;
		while (accept[index])
		{
			if (*str == accept[index])
			{
				return (str);
			}
			index++;
		}
		str++;
	}
	return ('\0');
}
