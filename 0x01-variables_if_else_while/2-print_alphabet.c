#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	do

	{
		putchar(alphabet);
		alphabet++;
	}
	while
	{
		(alphabet <= 'z');
	}
	putchar('\n');
	return (0);
}
