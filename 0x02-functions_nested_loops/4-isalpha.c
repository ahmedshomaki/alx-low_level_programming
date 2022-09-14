#include "main.h"

/**
* _isalpha - the function entry point
*@c : integer containing the asci code
*
* Return: 1 and 0
*/

int _isalpha(int c)
{
	if (c >= 97)
	{
		if (c <= 122)
		{
		return (1);
		}
	} else if (c >= 65)
	{
		if (c <= 90)
		{
		return (1);
		}
	}
return (0);
}
