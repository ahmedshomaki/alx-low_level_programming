#include "main.h"
#include <stdio.h>

/**
*rev_string - funcition print reverse
*@s: char variable which is a pointer
*
*Return: void function doesnot return any value
*/

void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	for (i = i; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
