#include "monty.h"

/**
 * f_add - adds the top 2 elements of the stack
 * @head: stack head
 * @counter: line number
 * Return: void
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int aux, len = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	free(h);
}