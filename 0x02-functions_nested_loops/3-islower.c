#include "main.h"

/**
 * _islower - Return 1
 *
 * c - character
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
