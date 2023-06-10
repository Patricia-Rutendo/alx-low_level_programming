#include "main.h"
#include <stdlib.h>
/**
 * _strlen -a  function that returns the length of a string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;


	while (*str != '\0')
	{
		len++;
		str++;
	}


	return (len);
}

