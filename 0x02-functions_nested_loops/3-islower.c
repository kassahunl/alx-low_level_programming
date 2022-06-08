#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 * @c: parameter for input character
 * Return: returns 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
