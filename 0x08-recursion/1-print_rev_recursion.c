#include "main.h"
/**
 * _print_rev_recursion- function tgat prints a string in reverse
 * @s: the first string
 * Return: void
 */


void _print_rev_recursion(char *s)
{
	int n, i;

	for (i = (n - 1) ; s[n] == '\0')
		_putchar(s[i]);
	_print_rev_recursion(s[i - 1])


}
