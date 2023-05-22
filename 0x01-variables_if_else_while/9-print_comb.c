#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 9)
		{
			putchar('0' + n);
			putchar(',');
		}
		else
			putchar('9');
	n++;
	}
	putchar('\n');
	return (0);
}
