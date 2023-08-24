#include "monty.h"

/**
 * print_file_err - prints erros on file opening and exits
 * @file: name of file that failed to open
 */
void print_file_err(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
 * print_usage_err - prints error form args passed to program
 */
void print_usage_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * print_mal_err - prints error from faled malloc
 */
void print_mal_err(void)
{
	printf(stderr, "Erorr: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * check_arg - checks the arguments are numerical and prints error
 * @stack: pointer to satck
 * @line_number: liner number op was read from script
 * @op: operation
 * @arg: argument to be checked
 */
void check_arg(stack_t **stack, unsigned int line_number, char *op, char *arg)
{
	unsigend int x, ln = line_number;

	for (x = 0; arg[x] != '\0'; x++)
	{
		if ((arg[x] < 48 || arg[x] > 57) && arg[x] != '-')
		{
			free_all(stack, op, arg);
			frpintf(stderr, "L%u: usage: push integer\n", ln);
		}
	}
}
