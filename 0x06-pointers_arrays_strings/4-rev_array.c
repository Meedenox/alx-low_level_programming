#include "main.h"
/**
 *reverse_array - unction that reverses the content of an array of integers
 *@a:a pointer to the string
 *@n:the number of elements of the array
 *
 *Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int a[];

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
	for (i = (n - 1); i >= 0; i--)
		_putchar(a[i]);
	return (0);

}
