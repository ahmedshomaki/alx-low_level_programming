#include "main.h"
#include <stdio.h>

/**
*
*
*
*/

void print_rev(char *s)
{
    int i;
    for (i = 63; i >= 0; i--)
    {
        printf("%c",*(s+i));
    }
}
