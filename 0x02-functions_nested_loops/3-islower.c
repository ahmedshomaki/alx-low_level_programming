#include "main.h"

/**
* _islower - the function entry point
*@cx : integer containing the asci code 
*
* Return: 1 and 0
*/

int _islower(int c)
{
	if (c >= 97)
	{
		if (c <= 122)
		{
		return (1);
		}
	}
return (0);
}
