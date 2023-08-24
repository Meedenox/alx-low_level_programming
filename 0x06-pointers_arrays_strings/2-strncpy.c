#include "main.h"
/**
 *_strncpy - function that copies a string
 *@dest: first string
 *@src :second string
 *@n: number of character in string
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
		return (dest);
}
