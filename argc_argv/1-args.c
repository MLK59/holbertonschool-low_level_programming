#include "main.h"
/**
 * main - function that prints the number of arguments passed into it..
 * @argc: The number of command line arguments.
 * @argv: array containing the program command line arguments
 * Return: 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf(" %d\n", argc -1);
	return (0); /* Return 0 to indicate successful executi$on*/
}
