#include "main.h"
#include <ctype.h>

/**
* _isdigit - the function entry point
*@c : integer containing the asci code
*
* Return: 1 or 0
*/

int _isdigit(int c)
{
	c = isdigit(c);
	if (c != 0)
		return (1);
	return (c);
}
