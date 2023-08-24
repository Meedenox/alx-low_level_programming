#include "main.h"
/**
 *_strncat -  function that concatenates two strings.
 *@src: the first string
 *@dest: the second string
 *@n: number of cases in string
 *Return: dest
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
