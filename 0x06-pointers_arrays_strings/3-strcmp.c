#include "main.h"
#include <string.h>

/**
*_strcmp - function of pointers
*@s1: pointer to the first string
*@s2: pointer to the second string
*
*Return: return p which is a pointer
*/

int _strncmp(char *s1, char *s2, int n)
{
	int p;

	p = strcmp(s1, s2);
	return (p);
}
