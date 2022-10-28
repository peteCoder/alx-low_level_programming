#include <stdio.h>

/**
* main - Prints all arguments it receives.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
<<<<<<< HEAD
=======

>>>>>>> 93b7f8f4c27ed4609a695b380478042d9bc0757b
