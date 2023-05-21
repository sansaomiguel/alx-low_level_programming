#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	do

	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	} while
	(alphabet <= 'z');
	putchar('\n');

	return (0);
}

