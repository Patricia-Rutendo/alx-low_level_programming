#include "main.h"

/**
 * _memcpy -  a function that copies @n bytes from the memory area pointed
 * @dest: pointer.
 * @src: source buffer
 * @n: number
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int q = n;


	for (; p < q; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

