#include "monty.h"
/**
 * f_push - add node to the stack
 * @h_stack: stack head
 * @line_num: number of line
 * Return: no return
*/
void push(stack_t **h_stack, unsigned int line_num)
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
		{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*h_stack);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h_stack);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(h_stack, n);
	else
		addqueue(h_stack, n);
}
