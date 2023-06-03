#include "main.h"
/**
 * _strncat - concatenates two strings,
 * using at most n bytes from the source string.
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from the source string
 *
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
