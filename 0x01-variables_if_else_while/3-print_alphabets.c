#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	do

	{
		putchar(lowercase);
		lowercase++;
	} while
	(lowercase <= 'z');

	do

	{
		putchar(uppercase);
		++uppercase;
	} while
	(uppercase <= 'Z');
	putchar('\n');

	return (0);
}
