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
	int s = 0;
	int e = n - 1
		;
	while (s < e)

	{
		int temp = a[s];

		a[s] = a[e];

		a[e] = temp;

		s++;
		e--;
	}
}

