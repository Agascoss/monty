#include "monty.h"
/**
 * f_pop - Prints the top.
 *
 * @head: Stack head.
 *
 * @counter: Line_number parameter.
 *
 * Return: Returns nothing.
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
