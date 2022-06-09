#include "main.h"

/**
 * print_square - prints a square shape
 *@size: input parameter
 */
void print_square(int size)
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

