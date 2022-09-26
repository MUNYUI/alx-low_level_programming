#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string to search
 * @accept: string containing the bytes to look for
 * Return: ponter to the byte in s that matches one of the bytes in accept
 * or null if the byte is not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')

	{
		j = 0;
		while (accept[j] != '\0')

		{
			if (s[i] == accept[j])

				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
