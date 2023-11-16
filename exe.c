#include "monty.h"
/**
* exe - executes the opcode
* @stack: head linked list - stack
* @line_num: number of line
* @file: pointer to monty file
* @content: line content
* Return: no return
*/
int exe(char *content, stack_t **stack, unsigned int line_num, FILE *file)
{
	instruction_t Operations[] = {
				{"push", push},
				{"pall", pall},
				{"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"divetion", divetion},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *a;

	a = strtok(content, " \n\t");
	if (a && a[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (Operations[i].opcode && a)
	{
		if (strcmp(a, Operations[i].opcode) == 0)
		{	Operations[i].f(stack, line_num);
			return (0);
		}
		i++;
	}
	if (a && Operations[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_num, a);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
