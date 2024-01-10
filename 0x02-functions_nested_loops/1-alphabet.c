#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char s = 'a';

	for (s = 'a'; s <= 'z'; s++)
		_putchar(s);
	_putchar('\n');
}
