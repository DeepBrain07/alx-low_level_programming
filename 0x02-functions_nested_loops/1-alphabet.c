#include "main.h"

/**main - prints out alphabets
 *
 * Return: Always (0)
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
	/*prints out alphabets*/
	{
		_putchar(x);
	}
	_putchar(10);
}	
