#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination string to be concatenated upon
 * @src: source string to append
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int abc = 0;
	int def = 0;

	while (dest[abc])
		abc++;

	for (def = 0; src[def]; def++)
		dest[abc++] = src[def];

	return (dest);
}
