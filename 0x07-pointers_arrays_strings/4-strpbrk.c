#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 *
 *@s: first string
 *@accept: second string
 *
 *Return : s or null
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
