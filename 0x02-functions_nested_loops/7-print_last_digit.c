#include "main.h"

/**
 * print_last_digit -> prints the last digit of a number
 * @n: input parameter
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
