#include "main.h"
/**
 *_strlen - chek code
 * description: return the lenght of a string
 * @s:the adress of the string
 * return: the lenght of the string
 */

int _strlen(char *s)
{
	int last;

	for (last = 0; *s != '\0'; *s++)
		last++;
	return (last);
}
