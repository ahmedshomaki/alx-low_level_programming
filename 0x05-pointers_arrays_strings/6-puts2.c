#include "main.h"
#include <stdio.h>

/**
*puts2 - funcition print reverse
*@str: char variable which is a pointer
*
*Return: void function doesnot return any value
*/

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + j) != '\0')
	{
		j++;
	}
	j = j - 1;
	for (i = 0; i <= j; i += 2)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
