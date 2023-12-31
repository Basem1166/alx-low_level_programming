#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc <= 2)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
