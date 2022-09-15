#include "main.h"

/**
* more_numbers - the function entry point
*
* Return: void function dont return anything
*/

void more_numbers(void)
{
int i, j, k;

for (k = 1; k <= 10; k++)
{
	for (i = 48; i <= 49; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == 49)
			{
				_putchar(i);
			}
			_putchar(j);
			if (i == 49 && j == 52)
			{
				_putchar('\n');
				break;
			}
		}
	}
}
}
