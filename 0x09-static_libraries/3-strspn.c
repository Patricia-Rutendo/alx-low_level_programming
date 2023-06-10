#include "main.h"

/**
 * _strspn - a feature that gets the length of a prefix substring.
 * @str: string
 * @accept: input prefix.
 *
 * Return: bytes
 */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*str)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*str == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		str++;
	}

	return (bytes);
}

