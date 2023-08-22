#include "main.h"

/**
 * strlen - imput a pointer to a string typ c
 *
 * @s:the adress of the string
 * return:on success  the lenght of the string
 */

int _strlen(char *s)
{
	int last;

	for (last = 0; *s != '\0'; s++)
		last++;
	return (last);
}
