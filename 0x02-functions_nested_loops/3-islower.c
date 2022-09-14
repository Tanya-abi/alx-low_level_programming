#include "main.h"
/**
* main - check for lowercase character.
*
* Description: utilise _islower to check for lowercase character.
* Returns: 1 if c is lowercase
* Returns: 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
		return (0);
}
