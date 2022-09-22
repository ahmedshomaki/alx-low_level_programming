#include "main.h"

/**
*string_toupper - char function
*@n: n is a char variable
*
*Return: it returns a pointer
*/

char *string_toupper(char *n)
{
	while (*n != '\0')
	{
		if (*n >= 97 && *n <= 122)
		{
			*n = *n - 32;
		}
		n++;
	}
	return (n - 1);
}
