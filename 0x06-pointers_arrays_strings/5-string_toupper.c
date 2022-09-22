#include "main.h"

/**
*string_toupper - char function
*@n: n is a char variable
*
*Return: it returns a pointer
*/

char *string_toupper(char *n)
{
	char *i;
	i = n;

	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 32;
		}
		n++;
	}
	return (i);
}
