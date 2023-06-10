#include "main.h"

/**
 * _strncpy - function that copies n bytes of src to the dest string
 * @dest: input character
 * @src: input character
 * @n: integer
 *
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	t = 0;
	while (t < n && *(src + t))
	{
		*(dest + t) = *(src + t);
		t++;
	}
	while (t < n)
	{
		*(dest + t) = '\0';
		t++;
	}
	return (dest);
}

