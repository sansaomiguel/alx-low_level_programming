#include <stdio.h>

int main(void)
{
	char alphabet;
	alphabet = 'a';

	do{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabet <= 'z');
	putchar('\n');
	return (0);
}
