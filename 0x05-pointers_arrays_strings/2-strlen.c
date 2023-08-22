#include "main.h"

/**
 *_strlen - imput a pointer to a string typ c
 *
 *@s:the adress of the string
 *
 *Return: l of s
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);

}
