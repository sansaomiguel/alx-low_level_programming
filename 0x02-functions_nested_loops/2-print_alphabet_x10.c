#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	for (ch = 1; ch <= 10; ++ch)
		_putchar('\n');
}
