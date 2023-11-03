#include "main.h"
/**
 * main - function that prints all arguments it receives.
 * @argc: The number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; ++i)
	{
		printf ("%s\n", argv[i]);
	}
	return (0); /* Return 0 to indicate successful executison*/
}
