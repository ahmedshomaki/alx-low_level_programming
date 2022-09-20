#include "main.h"
#include <stdio.h>

/**
*print_rev - funcition print reverse
*@s: char variable which is a pointer
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
	for (i = 0; i <= j; i+=2)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
