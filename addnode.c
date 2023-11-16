#include "monty.h"
/**
 * addnode - add node to the head stack
 * @h_stack: the stack head
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **h_stack, int n)
{

	stack_t *new_node, *aux;

	aux = *h_stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *h_stack;
	new_node->prev = NULL;
	*h_stack = new_node;
}
