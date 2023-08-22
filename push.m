#include "monty.h"

void push(char val)
{
	int num = atoi(val);
	char sta[1000];

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
