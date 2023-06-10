#include "main.h"

/**
*  _memset -This function fills the first n bytes of the memory
* @s: A pointer to the memory to be filled.
* @y: The value to be set.
* @n: The number of bytes to be filled.
* @return: A pointer to the memory area s.
*/

char *_memset(char *s, char y, unsigned int n)
{
	unsigned int index = 0;
	char *memory = s, value = y;

	while (index < n)
	{
		memory[index] = value;
		index++;
	}
	return (memory);
}

