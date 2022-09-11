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
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i+1; j <= 57; j++)
		{
		putchar(i);
		putchar(j);
		if (i != 56 || j != 57)
		{
		putchar(44);
		putchar(32);
		}
		}
	}
	putchar(10);

	return (0);
}
