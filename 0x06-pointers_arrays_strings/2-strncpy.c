#include "main.h"
#include <string.h>

/**
*_strncpy - function of pointers
*@dest: pointer to the first string
*@src: pointer to the second string
*@n: Integer
*
*Return: return p which is a pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p;

	p = strncpy(dest, src, n);
	return (p);
}
