#include "main.h"

/**
 * _isalpha -> checks if input is an alphabet or not
 * @c: input parameter
 * Return: return 1 if alphabet 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
