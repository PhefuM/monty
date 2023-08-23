#include "monty.h"

/**
 * f_sub - function that subtracts top elements
 * @head: stack head
 * @counter: line number
 * Return: void
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (node = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprint(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n = sus;
	*head = aux->next;
	free(aux);
}