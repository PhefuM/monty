#include "monty.h"

/**
 * push - push elements to stack
 * @val: element to be added to stack
 * Return: void
 */

void push(char *val)
{
	int num, i;
	char sta[100];

	num = atoi(val);
	sta[0] = num;

	printf("%d\n", num);
	i = 0;
	while (sta[i])
	{
		printf("%c", sta[i]);
		i++;
	}
	printf("\n");
}
