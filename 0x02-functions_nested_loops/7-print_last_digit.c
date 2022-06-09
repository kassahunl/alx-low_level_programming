#include "main.h"

/**
 * print_last_digit -> prints the last digit of a number
 * @n: input parameter
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		n = -n;
	_putchar(x + '0');
	return (x);
}
