#include "main.h"

/**
 * _isdigit - Function that checks for a digit
 * @c: character that has to be checked
 * Return: 1 if c is a digit, c if its not
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	else
		return (0);
}
