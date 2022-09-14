# include "main.h"

/**
* print_alphabet - the function entry point
*
* Return: it is void dont return anything
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
