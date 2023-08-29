#include "main.h"
/**
 * int _strspn - function that gets the length of a prefix substring.
 *
 *
 *
 *
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int isAccepted = 1;
	while (*s && isAccepted) 
	{
		isAccepted = 0;
		for (char *a = accept; *a; a++) 
		{
			if (*s == *a)
			{
				isAccepted = 1;
				break;
			}
		}
		if (isAccepted)
		{
			length++;
			s++;
		}
	}
	return length;
}
