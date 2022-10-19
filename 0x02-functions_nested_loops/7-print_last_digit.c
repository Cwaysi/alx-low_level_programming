#include "main.h"

/**
 * print_last_digit - Prints last digit
 * Description: Print last number
 * @t: integer value
 * Return: last digits
 */

int print_last_digit(int t)
{
	int f;

	if (t < 0)
		f = -1 * (t % 10);
	else
		f = t % 10;
	_putchar((f % 10) + '0');
	return (f % 10);
}
