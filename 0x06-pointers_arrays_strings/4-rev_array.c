#include "main.h"

/**
*reverse_array - void function reverse array
*@a: integer pointer
*@n: integer number that holds array size
*
*Return: void do not return any value
*/

void reverse_array(int *a, int n)
{
	int b[1000];
	int i , j;

	j = n - 1;
	for (i = 0; i < n; i++)
	{
		b[i] = *(a + j);
		j--;
	}
	for (i = 0; i < n; i++)
	{
		*a = b[i];
		a++; 
	}
}
