#include "main.h"

/*
 * _strncat - concatenates two strings
 * @dest: string to be appended upon.
 * @src: string to be appended to dest.
 * @n: number of bytes from src to be appended to dest.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int b, d;

	b = 0;

	while (dest[b])
		b++;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[b + d] = src[d];

	dest[b + d] = '\0';

	return (dest);
}
