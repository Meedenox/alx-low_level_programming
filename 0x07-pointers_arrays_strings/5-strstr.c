#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
