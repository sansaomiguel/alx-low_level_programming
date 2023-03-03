#include "main.h"

/**
 * _strcmp - compares poiners to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If s1<s2, the negative difference of the first unmatched characters.
 * Possitive integer if the stopping character in @s1 was greater than he stopping 
 * character in @s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++; s2++;
	}

	return (*s1 - *s2);
}
