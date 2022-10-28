#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Print a conditional expression
 * Description: Print a conditional expression
 * Return: 0
*/
int main(void)
{

	char ch;

	ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch = ch + 1;
	}

	putchar('\n');

	return (0);
}
