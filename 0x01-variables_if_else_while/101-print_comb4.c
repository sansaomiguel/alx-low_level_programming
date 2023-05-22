#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n,m,k;
	n = 0;
	m = 1;
	k = 3;

	while (n <= 7)
	{
		while (m <= 8)
		{
			while (k <= 9)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + k);

				if (n != 7 || m != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			m++;
			k = m + 1;
		}
		n++;
		m = n + 1;
		k = m + 1;
	}
	putchar('\n');
	return (0);
}
