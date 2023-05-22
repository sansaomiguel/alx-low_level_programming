#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int nn = 0;

	while (n < 10)
	{
		while (nn < 10)
		{
			putchar('0' + nn);
			putchar('0' +n);
			nn++;
		}
		n++;
		nn = 0;
	}
	putchar('\n');
	return (0);
}
