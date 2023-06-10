#include "main.h"
#include <stdio.h>

/**
 * _abs - Function that computes the absolute value of an integer.
 *
 * @k: character to check
 *
 * Return: k if k > 0, 0 if k == 0, -k if k < 0
 */

int _abs(int k)
{
	if (k > 0)
	{
		return (k);
	}
	else if (k == 0)
	{
		return (0);
	}
	else
	{
		return (-k);
	}
}

