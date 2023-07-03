#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string containing accepted characters
 *
 * Return: Number of bytes in the initial segment of s consisting only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;

	while (*s && found)
	{
		int i = 0;

		found = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				found = 1;
				length++;
				break;
			}
			i++;
		}
		s++;
	}

	return (length);
}

