#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int i, sign, result;

	i = 0;
	sign = 1;
	result = 0;
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
	if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
	}
	else
	{
		break;
	}
	i++;
	}

	return (sign * result);

}
