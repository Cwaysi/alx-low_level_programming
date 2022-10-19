#include "main.h"
/**
 * _islower - checks for lower casing
 * Return : 0 if lower and 1 if positive
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
		else
		{
			return (0);
		}
	}
}
