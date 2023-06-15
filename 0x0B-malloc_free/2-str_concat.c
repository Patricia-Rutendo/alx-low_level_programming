#include "main.h"
#include <stdlib.h>
/**
 * str_concat - gets ends of input and adds together for size
 * @str1: input one to be concatenated
 * @str2: input two to be concatenated
 * Return: concat of str1 and str2
 */
char *str_concat(char *str1, char *str2)
{
	char *conct;
	Int r, cr;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	r = cr = 0;
	while (str1[r] != '\0')
		r++;
	while (str2[cr] != '\0')
		cr++;
	conct = malloc(sizeof(char) * (r + cr + 1));

	if (conct == NULL)
		return (NULL);
	r = cr = 0;
	while (str1[r] != '\0')
	{
		conct[r] = str1[r];
		r++;
	}

	while (str2[cr] != '\0')
	{
		conct[r] = str2[cr];
		r++, cr++;
	}
	conct[r] = '\0';
	return (conct);
}

