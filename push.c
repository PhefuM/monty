#include "monty.h"

/**
 * f_push - push elements to stack
 * @head: element to be added to stack
 * @counter: line_number
 * Return: void
 */

<<<<<<< HEAD
void f_push(stack_t **head, unsigned int counter)
=======
void f_push(char *val)
>>>>>>> b4ee83ae886629c58bea866b1641b71c1920ff6d
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }
		n = atoi(bus.arg);
		if (bus.lifi == 0)
			addnode(head, n);
		else
			addqueue(head, n);
}
