#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints product of arguments given
 * @argc: the number of arguments
 * @argv: array containing the arguments
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}

