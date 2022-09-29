#include <stdio.h>
#include "main.h"

/**
 * print_line - prints line in the terminal
 * @n: number of times line is printed
 * Return: Always 0 (success)
 */

void print_line(int n)


{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			if (i == n)
			{
				_putchar('_');
				_putchar('\n');
			}
			else
			{
				_putchar('_');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
