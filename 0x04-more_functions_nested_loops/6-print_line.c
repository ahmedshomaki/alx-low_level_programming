#include "main.h"

/**
* print_line - the function entry point
*@n : integer number
*
* Return: void function dont return anything
*/

void print_line(int n)
{
int i;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
