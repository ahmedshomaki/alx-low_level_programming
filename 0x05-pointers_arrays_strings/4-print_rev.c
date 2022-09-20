#include "main.h"
#include <stdio.h>

/**
*
*
*
*/

void print_rev(char *s)
{
    int i = 0;

    while (*(s+i) != '\0')
    {
        i++;
    }
    i = i - 1;
    for (i = i; i >= 0; i--)
    {
        printf("%c",*(s+i));
    }
}
