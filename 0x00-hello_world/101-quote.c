#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, print
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece f art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
