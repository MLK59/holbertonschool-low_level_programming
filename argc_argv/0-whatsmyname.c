#include <stdio.h>
/**
 * main - funcction that prints its name .
 * @argc: The number of command line arguments.
 * @argv: array containing the program command line arguments
 *
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("The name of programme is %s\n", argv[0]);
	return (0);
}
