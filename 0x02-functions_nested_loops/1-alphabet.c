#include "main.h"
/**
* main - prints the alphabet,in lowercase,followed by a new line.
*
* Description: You can only use _putchar twice in your code
* Return: void
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
