#include "main.h"

/**
* print_alphabet - the function entry point
*
* Return: it is void dont return anything
*/

void print_alphabet(void)
{
	int i,j;
for (j = 1; j <= 5; j++)
{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
}
