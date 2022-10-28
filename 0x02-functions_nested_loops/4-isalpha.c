#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - This prints alphabets function
* @c: The character to print
* Desciption: _isalpha desc here
* Return: 0
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
