#include "monty.h"

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @h_stack: the stack head
 * Return: no return
*/
void addqueue(stack_t **h_stack, int n)
{
	stack_t *new_node, *aux;

	aux = *h_stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*h_stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
