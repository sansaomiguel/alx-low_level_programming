#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to the changed string
 */

char *string_toupper(char *s)
{
	int abc = 0;

	while (s[abc] != '\0')
	{
		if (s[abc] >=  97 && s[abc] <= 122)
			s[abc] = s[abc] - 32;
		abc++;
	}
	return (s);
}
