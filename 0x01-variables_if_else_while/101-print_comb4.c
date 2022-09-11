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
	int i, j, z;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (z = j + 1; z <= 57; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i != 55 || j != 56 || z != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
