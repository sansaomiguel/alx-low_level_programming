#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The characer to be checked
 *
 * Return: 1 if character is letter, lower case or uppecase, otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
