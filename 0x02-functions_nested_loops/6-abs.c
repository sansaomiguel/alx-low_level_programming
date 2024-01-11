#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @number: value
 * Return: Result
 */

int _abs(int number)
{
	if (number < 0)
	{
		return (-number);
	}
	else
	{
		return (+number);
	}
}
