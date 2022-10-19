#include "main.h"

/**
 * print_to_98 - Entryrr
 * Description: printing number to 98
 * Return: nothin
 * @n: para
 */

void print_to_98(int n)
{
	if (n <=98)
	{
		for (; n <=98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		putchar('\n');
	}
	else
	{
		for (; n >=98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		putchar('\n');
	}
}
