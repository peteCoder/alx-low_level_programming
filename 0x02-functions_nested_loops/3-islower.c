#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - This prints alphabets function
* @c: The character to print
* Desciption: _islower desc here
* Return: 0
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
