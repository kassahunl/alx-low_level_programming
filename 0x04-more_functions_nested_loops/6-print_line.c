#include "main.h"

/**
 * print_line - print a line of given unit
 * @n: unit length input
 */
void print_line(int n)
{
	if (0 < n)
	{
		for (int i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
