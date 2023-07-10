#include "main"
#include <stdlib.h>

/**
 * create_array - creates char array and initialises
 * it with a specific char.
 * @size: size of the array.
 * @c: initial value
 *
 * Return: returns a pointer to the array
 *or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) *size};
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
