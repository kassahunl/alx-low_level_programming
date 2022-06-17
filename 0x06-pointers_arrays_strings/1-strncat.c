#include "main.h"
#include<string.h>

/**
 * _strncat -> function to appeend character
 * @dest: 1st param
 * @src: 2nd param
 * @n: 3rd param
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
