#include "main.h"
#include <ctype.h>

/**
* _isupper - the function entry point
*@c : integer containing the asci code
*
* Return: 1 or 0
*/

int _isupper(int c)
{
	c = isupper(c);
	if(c != 0)
		return 1;
	return (c);
}
