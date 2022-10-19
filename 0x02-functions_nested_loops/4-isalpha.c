#include "main.h"

/**
 * _isalpha - Entry point
 * @c: this is the parameter
 * Description: checking if its an alphabet whether lower or uper
 * Return: 1 or 0 depending on result
 */

int _isalpha(int c)
{
	char alp, upp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		for (upp = 'A'; upp <= 'Z'; upp++)
		{
			if (c == alp || c == upp)
			{
				return (1);
			}
		}

	}
	return (0);
}
