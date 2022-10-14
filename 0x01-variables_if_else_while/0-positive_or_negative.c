#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */



/**
 * main -Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%n is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%n is zero\n", n);
	}
	else
	{
		printf("%n is negative\n", n);
	}
	return (0);
