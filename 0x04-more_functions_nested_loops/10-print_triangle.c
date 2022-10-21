#include "main.h"

/**
 * print_triangle - function name
 * @size: parameter
 * Description: printing triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int h, t;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (t = size - h; t > 0; t--)
				_putchar(' ');
			for (t = 0; t < h; t++)
				_putchar('#');
			if (h == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
