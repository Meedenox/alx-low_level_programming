#include "main.h"
/**
 * int _strspn - function that gets the length of a prefix substring.
 *
 * @s:first string
 * @accept: second string
 * Return: i
 *
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
