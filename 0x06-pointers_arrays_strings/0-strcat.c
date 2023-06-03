#include "main.h"
/**
 *  _strcat -  concatenates two strings.
 * @destination: The string to be concatenated to.
 * @source: The string to be concatenated.
 *
 * Return: The concatenated string.
 */
char *_strcat(char *destination, char *source)
{
	int i;
	int j;

	i = 0;
	while (destination[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (source[j] != '\0')
	{
		destination[i] = source[j];
		i++;
		j++;
	}

	destination[i] = '\0';
	return (destination);
}
