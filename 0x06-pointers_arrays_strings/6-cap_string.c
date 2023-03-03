#include "main.h"

/**
 * cap_string - capitalizes all words of string
 * @str: string to be capitalized
 *
 * Return: pointer to te changed string
 */

char *cap_string(char *s)
{
	int abc = 0;

	while (s[abc])
	{
		while (!(s[abc] >= 97 && s[abc] <= 122))
			abc++;

		if (s[abc - 1] == ' ' ||
		    s[abc - 1] == '\t' ||
		    s[abc - 1] == '\n' ||
		    s[abc - 1] == ',' ||
		    s[abc - 1] == ';' ||
		    s[abc - 1] == '.' ||
		    s[abc - 1] == '!' ||
		    s[abc - 1] == '?' ||
		    s[abc - 1] == '"' ||
		    s[abc - 1] == '(' ||
		    s[abc - 1] == ')' ||
		    s[abc - 1] == '{' ||
		    s[abc - 1] == '}' ||
		    abc == 0)
			s[abc] -= 32;

		abc++;
	}

	return (s);
}
