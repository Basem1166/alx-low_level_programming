#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: The modified string
 */
char *leet(char *str)
{
	char *letters = "AEOTL";
	char *leet_nums = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}

	return (str);
}

