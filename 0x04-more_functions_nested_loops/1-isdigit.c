#include <stdio.h>
#include "main.h"

/**
 *  _isdigit - checks for a digit 0-9
 *  @c: figure being checked
 *  Return: 1-if its digit 0-otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	else
		return (0);
}
