#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: a pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (string[index])
	{
		while (!(string[index] >= 'a' && string[index] <= 'z'))
			index++;

		if (string[index - 1] == ' ' ||
		    string[index - 1] == '\t' ||
		    string[index - 1] == '\n' ||
		    string[index - 1] == ',' ||
		    string[index - 1] == ';' ||
		    string[index - 1] == '.' ||
		    string[index - 1] == '!' ||
		    string[index - 1] == '?' ||
		    string[index - 1] == '"' ||
		    string[index - 1] == '(' ||
		    string[index - 1] == ')' ||
		    string[index - 1] == '{' ||
		    string[index - 1] == '}' ||
		    index == 0)
			string[index] -= 32;

		index++;
	}

	return (string);
}

