#include "main.h"

/**
* jack_bauer - the function entry point
*
* Return: void
*/

void jack_bauer(void)
{
	int i, j, k, l;

for (i = 48; i <= 50; i++)
	{
		for (j = '0'; j <= '9'; j++)
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
					if (i == '2' && j == '3' && k == '5' && l == '9')
					{
						return;
					}
				}
			}
		}
	}
}
