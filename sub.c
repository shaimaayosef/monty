#include "monty.h"
/**
  *sub- sustration
  *@h_stack: stack head
  *@line_num: number of line
  *Return: no return
 */
void sub(stack_t **h_stack, unsigned int line_num)
{
	stack_t *aux;
	int sus, nodes;

	aux = *h_stack;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h_stack);
		exit(EXIT_FAILURE);
	}
	aux = *h_stack;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*h_stack = aux->next;
	free(aux);
}
