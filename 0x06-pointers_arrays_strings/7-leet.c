#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 *
 * Return: @s
 */

char *leet(char *s)
{
	int abc, def = 0;
	int g[] = {97, 101, 111, 116, 108};
	int h[] = {65, 69, 79, 84, 76};
	int i[] = {52, 51, 48, 55, 49};

	while (s[def] != '\0')
	{

		for (abc = 0; abc < 5; abc++)
		{
			if (s[def] == g[abc] || s[def] == h[abc])
			{
				s[def] = i[abc];
				break;
			}
		}
		def++;
	}
	return (s);
}
