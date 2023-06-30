#include "main.h"
#include <ctype.h>  // Include the ctype.h library for the toupper() function

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first character */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = toupper(str[0]);

	/* Capitalize the subsequent characters after separators */
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			    str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			    str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			    str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			    str[i - 1] == '}')
			{
				str[i] = toupper(str[i]);
			}
		}
	}

	return (str);
}

