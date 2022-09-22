#include "main.h"

/**
*string_toupper - char function
*@n: n is a char variable
*
*Return: it returns a pointer
*/

char *string_toupper(char *n)
{
        char b[1000];
        int i = 0 , j = 0;

        while (*n != '\0')
        {
                if (*n > 90)
                {
                        *n = *n - 32;
                }
                n++;    
        }

return (n-1);
}
