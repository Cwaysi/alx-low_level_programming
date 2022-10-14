#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ht;

	int i;

	for  (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ht = 'a'; ht <= 'f'; ht++)
	{
		putchar(ht);
	}
	putchar('\n');
	return (0);
}
