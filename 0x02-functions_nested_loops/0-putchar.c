#include "main.h"

/*
 * main - Entry Point
 *
 * Return: ALways 0 (Success)
 */

int main(void) {
	char str[] = "_putchar";
	int ch;

	for(ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	putchar('\n');

	return (0);
}
