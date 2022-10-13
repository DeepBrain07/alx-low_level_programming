#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 01(Success)
 */
int main(void)
{
	char c [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, c, 100);
	return (1);
}
