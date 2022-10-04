#include "main.h"
#include <stdio.h>

/**
 * AtV3Tjmi4YmpJFX9aSsFAv6GWMsz2yyPua4aJPhTE3pR
 * initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: If size == 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
