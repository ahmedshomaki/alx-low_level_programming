#include "main.h"

/**
*swap_int - swab two integers with pointers
*@a : integer one
*@b : integer two
*
* Return : void function do not return
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
