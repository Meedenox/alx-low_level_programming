#include "main.h"
/**
 * _puts_recursion-function that prints a string, followed by a new line
 *
 *
 *
 *@s: the string
 *Return: void
 *
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i != '\0' ; i++)
	{
		_putchar(s[i]);

	}
	_putchar("\n");


}
