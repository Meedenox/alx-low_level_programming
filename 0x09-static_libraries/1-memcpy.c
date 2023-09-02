#include "main.h"
/**
* *_memcpy -function that copies memory area
* @dest:fird array
* @src: second array
* @n: number of element in the first array
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
