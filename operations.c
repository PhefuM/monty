#include "monty.h"

/**
 * pint_stack - prints the value at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number
 * Return: void
 */

void pint_stack(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		free_all(stack, NULL, NULL);
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * swap_stack - swap the top 2 elements of the stack
 * @stack: pointer to stack
 * @line_number: line number
 * Return: void
 */

void swap_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *prev, *temp = *stack;
	unsigned int num = line_number;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		free_all(stack, NULL, NULL);
		fprintf(stderr, "L%u: can't swap, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	prev = (*stack)->prev;
	prev->next = NULL;
	temp->prev = prev->prev;
	if (prev->prev != NULL)
		prev->prev->next = temp;
	prev->prev = temp;
	temp->next = prev;
	*stack = prev;
}

/**
 * add_stack - adds the top elements of stack
 * @stack: pointer to stack
 * @line_number: line number
 * Return: void
 */

void add_stack(stack_t **stack, unsigned int line_number)
{
	unsigned int num = line_number;
	int integer;
	stack_t *prev, *temp = *stack;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		free_all(stack, NULL, NULL);
		fprintf(stderr, "L%u: can't add, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	prev = (*stack)->prev;
	integer = prev->n + (*stack)->n;
	prev->next = NULL;
	*stack = prev;
	free(temp);
}

/**
 * sub_stack - subtracts the top 2 elements
 * @stack: pointer to stack
 * line_number: line number
 * Return: void
 */

void sub_stack(stack_t **stack, unsigned int line_number)
{
	unsigned int num = line_number;
	int integer;
	stack_t *prev, *temp = *stack;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		free_all(stack, NULL, NULL);
		fprintf(stderr, "L%u: can't sub, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	prev = (*stack)->prev;
	integer = prev->n - (*stack)->n;
	prev->n = integer;
	prev->next = NULL;
	*stack = prev;
	free(temp);
}

/**
 * mul_stack - multiplies the top 2 elements
 * @stack: pointer to stack
 * @line_number: line number
 * Return: void
 */

void mul_stack(stack_t **stack, unsigned int line_number)
{
	unsigned int num = line_number;
	int integer;
	stack_t *prev, *temp = *stack;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		free_all(stack, NULL, NULL);
		fprintf(stderr, "L%u: can't mul, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	prev = (*stack)->prev;
	integer = prev->n * (*stack)->n;
	prev->n = integer;
	prev->next = NULL;
	*stack = prev;
	free(temp);
}
