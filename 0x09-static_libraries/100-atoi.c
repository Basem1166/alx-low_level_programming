#include "main.h"

/**
 * _atoi - converting a string to an integer
 * @s: string to be converted
 * Return: Always value
*/

int _atoi(char *s)
{
	unsigned int result = 0;
	int digit, sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
		{
			while ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
			{
				digit = s[i] - '0';
				result = result * 10 + digit;
				i++;
			}
			break;
		}
		i++;
	}
	return (sign * result);
}
