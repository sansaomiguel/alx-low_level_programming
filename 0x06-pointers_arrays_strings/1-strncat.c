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
	int abc, def;

	abc = 0;

	while (dest[abc])
		abc++;

	for (def = 0; def < n && src[def] != '\0'; def++)
		dest[abc + def] = src[def];

	dest[abc + def] = '\0';

	return (dest);
}
