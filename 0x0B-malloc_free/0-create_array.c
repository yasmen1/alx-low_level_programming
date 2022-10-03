#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: initialization char
 * Return: NULL if size =0, a pointer to array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int s;

	if (size == 0)
		return (NULL);

	arr = malloc(size(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
