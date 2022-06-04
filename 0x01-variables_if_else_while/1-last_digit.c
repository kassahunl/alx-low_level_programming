#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - printsr the comparisson result of the last digit of a random number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

