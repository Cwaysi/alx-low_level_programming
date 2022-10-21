#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point to check upper
 * @c: input alphabet
 * Description: check if c is upper and return 1 else 0
 * Return: Always 0
 */

int _isupper(int c)
{
	char upp;
	int ret = 0;

	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		if (c == upp)
		{
			ret = 1;
			break;
		}
	}
	return (ret);
}
