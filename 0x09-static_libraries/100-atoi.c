#include "main.h"
/**
 * _atoi- This function converts a string to an integer.
 *
 * @str: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *str)
{
 	int sign = 1, i = 0;
 	unsigned int result = 0;


 	while (!(str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
 	{
 		if (str[i] == '-')
 			sign *= -1;
 		i++;
 	}
 	while (str[i] <= '9' && (str[i] >= '0' && str[i] != '\0'))
 	{
 		result = (result * 10) + (str[i] - '0');
 		i++;
 	}
 	result *= sign;
 	return (result);
 }


