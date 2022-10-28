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
	char CH;

	ch = 'a';
	CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH = CH + 1;
	}
	putchar('\n');

	return (0);
}
