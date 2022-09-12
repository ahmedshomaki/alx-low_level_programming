#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there*/
/**
 * main - The entry point of the program
 *
 * Return: The function returns integer
 */
int main(void)
{
int i, j, z, q;

for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		for (z = i; z <= 57; z++)
		{
			for (q = 48; q <= 57; q++)
			{
				/*if (!(i == z && j == q))*/
				{
					/*if (q - j >= 1)*/
					{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(z);
					putchar(q);
					putchar(44);
					putchar(32);
					}
				}
			}
		}
	}
}
putchar(10);

return (0);
}
