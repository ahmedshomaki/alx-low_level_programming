#include "main.h"

/**
*string_toupper - char function
*@n: n is a char variable
*
*Return: it returns a pointer
*/

char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if (*(n + i) >= 'a' && *(n = i) <= 'z')
		{
			*(n + i) = *(n + i) - 32;
		}
		i++;
	}
	return (n - 1);
}
