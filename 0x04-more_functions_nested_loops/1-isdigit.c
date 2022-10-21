#include "main.h"

/**
 * _isdigit - main entry point
 * @c: recieving value
 * Description: let see if c is a digit
 * Return: always 0
 */

int _isdigit(int c)
{
	int dig = 0;
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			dig = 1;
			break;
		}
	}
	return (dig);
}
