#include "main.h"
#include <stdio.h>

/**
*puts_half - funcition print reverse
*@str: char variable which is a pointer
*
*Return: void function doesnot return any value
*/

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + j) != '\0')
	{
		j++;
	}
	j--;
	if (i %  2 == 0)
	{
		for (i = j / 2 ; i <= j - 1; i++)
		{
			printf("%c", *(str + i));
		}
		printf("\n");
	} else
	{
		for (i = (j - 1) / 2; i <= j - 1; i++)
		{
			printf("%c", *(str + 1 + i));
		}
		printf("\n");
	}
}
