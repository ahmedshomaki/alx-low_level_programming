#include "main.h"
#include <string.h>

/**
*_strncat - function of pointers
*@dest: pointer to the first string
*@src: pointer to the second string
*@n: Integer
*
*Return: return p which is a pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = strncat(dest, src, n);
	return (p);
}
