#include "main.h"

/**
 * _isdigit - check the code for a digit (0 through 9)
 * @x: character to be checked
 * Return:1 if c is a digit, 0 otherwise
 */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	return (0);
}

