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

	n = (n % 10);
	if (n < 0)
		n = -n;
	m = n + '0';
	_putchar(m);
	return (n);
}
