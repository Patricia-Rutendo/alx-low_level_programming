i#include "main.h"
/**
 * rev_array - reverses an array of integers.
 * @arr: The array to be reversed
 * @length: The number of elements in the array
 *
 * Return: void
 */
void rev_array(int *arr, int length)
{
	int i;
	int t;

	for (i = 0; i < length--; i++)
	{
		t = arr[i];
		arr[i] = arr[length];
		arr[length] = t;
	}
}

