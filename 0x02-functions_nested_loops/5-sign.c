#include "main.h"

/**
* print_sign - the function entry point
*@n : integer containing the asci code
*
* Return: 1 , 0 or -1
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		_putchar('0');
		return (0);
}
