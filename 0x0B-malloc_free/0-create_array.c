#include <stdlib.h>
#include "main.h"
/**
 * create_array - -Function to create an array of chars and initialize it
 * @size:desired size to be created
 * @c:value to be initialized
 * malloc creates an array for char
 * Return: array if succesful
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array  =  (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}
