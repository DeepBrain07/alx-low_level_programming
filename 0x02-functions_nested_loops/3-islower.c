#include "main.h"
#include <ctype.h>

/**
 * _islower - tells if a number is in lower case
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		/*tells if a number is in lower case*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
