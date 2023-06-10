#include "main.h"

/**
 * _isupper - this function checks for uppercase letters
 * @l: letter to be checked
 *
 * Return: either 0 or 1.
 */

int _isupper(int l)
{

	if (l >= 'A' && l <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

