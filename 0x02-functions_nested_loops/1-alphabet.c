#include <stdio.h>
#include "main.h"

/**
* print_alphabet - This prints alphabets function
* Return: 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
