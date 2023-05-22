#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n = 1;
	int nn = 0;

	while (n < 9)
	{
		while (nn <= 9)
		{
			putchar('0' + n);
			putchar('0' + nn);

			if (n != 8 || nn != 9)
			{
				putchar(',');
				putchar(' ');
			}
			nn++;
		}
		n++;
		nn = n + 1;
	}
	putchar('\n');
	return (0);
}
