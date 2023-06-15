#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - creates a duplicate in new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int p, q = 0;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;

	aaa = malloc(sizeof(char) * (p + 1));

	if (aaa == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		aaa[q] = str[q];

	return (aaa);
}


