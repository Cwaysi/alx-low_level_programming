#include "main.h"
/**
 * _islower - checks for lower casing
 * Return : 0 if lower and 1 if positive
 * @c: is the collecting
 * Description: I dont have any desc
 * Return: Always 0
 */

int _islower(int c)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (c == low)
		{
			return (1);
		}
	}

	return (0);
}
