#include "factor.h"
/**
 * main - runner function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *files;
	size_t counter;
	ssize_t lines;
	char *holder = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	files = fopen(argv[1], "r");
	if (files == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((lines = getline(&holder, &counter, files)) != -1)
		fact(holder);
	return(0);
}
