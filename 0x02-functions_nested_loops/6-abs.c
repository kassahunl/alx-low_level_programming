#include "main.h"

/**
 * _abs -> computes the absolute value of an integer
 * @n: input parameter
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
