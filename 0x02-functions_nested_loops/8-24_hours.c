#include "main.h"

/**
* jack_bauer - the function entry point
*
* Return: void
*/

void jack_bauer(void)
{
	int i ,j, k, l, m;

for (m = 1; m <= 2; m++)
{
	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '3'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			
			}
		
		
		}
	
	}
}
}
