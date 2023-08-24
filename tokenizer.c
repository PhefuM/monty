#include "monty.h"

/**
 * tokenize - extracts the opcode
 * @buf: life read from script
 * @arg:arguments
 * @opcode: pointer to opcode
 * Return: -1 if unsuccessful, 1 if empy, 0 is something was read
 */

int tokenize(char *buf, char **opcode, char **arg)
{
	int i = 0, x = 0, found = 0;
	char *temp;

	while (buf[i] != '\n' && buf[i] != '\0' && buf[i] != '#')
	{
		if (buf[i] != ' ')
		{
			temp = malloc(128 * sizeof(char));
			if (temp == NULL)
			{
				if (found == 1)
					free(*opcode);
				return (-1);
			}
			if (found == 0)
				*opcode = temp;
			else if (found == 1)
				*arg = temp;
			for (x = 0; buf[i] != '\n' || buf[i] != '\0'; x++)
			{
				temp[x] = buf[i];
				i++;
				if (buf[i] == ' ' || buf[i] == '\0' || buf[i] == '\n')
				{
					temp[++x] = '\0';
					found++;
					break;
				}
			}
			if (strcmp(temp, "push") == 0 && found == 1)
				continue;
			break;
		}
		i++;
	}
	if (found == 0)
		return (1);
	return (0);
}
