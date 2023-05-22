#include <stdio.h>

/**
 * main -prints the name of the file using macro
 *
 * Return: 0 ALways (Success)
 */

int main(void)
{
	const char *file_name = __FILE__;
	int i = 0;

	while (file_name[i] != '\0')
	{
		putchar(file_name[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
