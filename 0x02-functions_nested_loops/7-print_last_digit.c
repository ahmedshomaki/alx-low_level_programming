#include "main.h"

/**
* print_last_digit - the function entry point
*@n : integer containing the asci code
*
* Return: integer
*/

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	n = (n % 10);
	m = n + '0';
	_putchar(m);
	return (n);
}
