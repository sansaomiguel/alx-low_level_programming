#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int ch, line;

	for (ch = 'a'; ch <= 'z'; ch+=10)
		_putchar(ch);
		_putchar('\n');
}
