#include "main.h"
/**
* main - prints 10 times the alphabet,in lowercase,followed by a new line* 
* Description - utilise _putchar function
* You can only use _putchar twice in your code
*/
void print_alphabet_x10(void)
{
	char c, i;
	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
