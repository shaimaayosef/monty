#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @h_stack: the stack head
*/
void free_stack(stack_t *h_stack)
{
	stack_t *aux;

	aux = h_stack;
	while (h_stack)
	{
		aux = h_stack->next;
		free(h_stack);
		h_stack = aux;
	}
}
