#include "main.h"
/**
 *  _strncpy - copies a string from source to destination.
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to be copied
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

