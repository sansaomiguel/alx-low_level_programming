#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}
