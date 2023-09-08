#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int k;

	for (n = 0 ; n < 9 ; n++)
	{
		k = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + k);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			k++;
		} while (k < 10);
	}
	putchar('\n');
	return (0);
