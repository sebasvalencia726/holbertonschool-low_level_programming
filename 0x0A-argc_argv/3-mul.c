#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that that prints all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		exit(1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
