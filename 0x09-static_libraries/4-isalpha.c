#include "main.h"
		
/**
 * _isalpha - Checks for either uppercase or lowercase alphabetic character
 * @t: the character to be checked
 * Return:  1 if t is either uppercase or lowercase, 0 if otherwise
 */
int _isalpha(int t)
{
	return ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z'));
}

