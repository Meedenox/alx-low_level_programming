nclude "main.h"
/**
 *_strcmp - function that compares two strings
 *@s1:the first string
 *@s2: the second string
 *
 *Return: equal 0 or else
 *
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int same = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = (int)*s1  - (int)*s2;
			break;
		}
		s1++;
		s2++;
	}
	return (same);
}
