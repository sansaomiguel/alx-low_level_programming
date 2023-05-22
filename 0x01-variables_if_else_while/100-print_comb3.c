#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n = 1;
	int nn = 0;

	while (n <= 9)
	{
		while (nn <= 9)
		{
			putchar('0' + nn);
			putchar('0' + n);
			
			if (n != 9 || nn != 9)
			{	
				putchar(',');
				putchar(' ');
			}
			nn++;
		}
		n++;
		nn = 0;
	}
	putchar('\n');
	return (0);
}
