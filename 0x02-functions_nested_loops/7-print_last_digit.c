#include "main.h"

/**
* print_last_digit - the function entry point
*@n : integer containing the asci code
*
* Return: integer
*/

int print_last_digit(int n)
{
	n = n % 10;
	return (_putchar(n));
}
