#include "main.h"

/**
 * _strncpy - Function that copis a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int abc;

	for (abc = 0; abc < n && src[abc] != '\0'; abc++)
		dest[abc] = src[abc];

	while (abc < n)
	{
		dest[abc] ='\0';
		abc++;
	}

	return (dest);
}
