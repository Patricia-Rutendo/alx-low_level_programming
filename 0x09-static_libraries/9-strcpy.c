#include "main.h"

/**
 * char *_strcpy - it  copies the string pointed to by src into dest
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int t = 0;


	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; t < k ; t++)
	{
		dest[t] = src[t];
	}
	dest[k] = '\0';
	return (dest);
}

