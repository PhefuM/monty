#include "monty.h"
/**
 * f_mul - Multiplies the top two elements of te stack
 * @head: Stack head
 * @counter: line_number
 * Return: no return
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;


	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head->next->n * h->n;
	aux = h->next->n * h->n;
	*head = h->next;
	free(h);
}
