#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to concat.
 * @s2: string to concat until n.
 * @n: number of characters of s2 to append to s1.
 * Return:  a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	len1 = len(s1);
	len2 = len(s2);
	if (n >= len2)
		n = len2;
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (; (i - (len1 - 1)) < n && s2[i - len1 + 1] != '\0'; i++)
		ptr[i] = s2[i - len1 + 1];
	ptr[i] = '\0';
	return (ptr);
}

/**
 * len - function that returns the length of a string.
 * @s: string to check.
 *
 * Return: length.
 *
 */
int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	return (i);
}
