#include "holberton.h"
/**
 * _atoi - Function that print just numbers from a string.
 * @s:  string.
 *
 *
 */
int _atoi(char *s)
{
	int res = 0;
	int i;
	int temp = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
		}
		else if (s[i] == '-')
		{
			temp = -1;
		}
		else
		{

		}
	}
	res = res * temp;
	return res;
}
