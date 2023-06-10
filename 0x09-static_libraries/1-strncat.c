#include "main.h"

/**
 * _strncat - concatenates src to the dest string
 *using at most n bytes from src
 * @dest: character
 * @src: character
 * @n: integer
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r, s;

	r = s = 0;
	while (*(dest + r))
		r++;
	while (s < n && *(src + s))
	{
		*(dest + r) = *(src + s);
		r++;
		s++;
	}
	if (s < n)
		*(dest + r) = *(src + s);
	return (dest);
}

