#include "main.h"
#include <string.h>

/**
*_strcat - function of pointers
*@dest: pointer to the first string
*@src: pointer to the second string
*
*Return: return p which is a pointer
*/

char *_strcat(char *dest, char *src)
{
	char *p;
	p = strcat(dest, src);
	return (p);
}
