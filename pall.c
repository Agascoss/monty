#include "monty.h"
/**
 * f_pall - prints the stack.
 *
 * @head: stack head parameter.
 *
 * @counter: No used parameter.
 *
 * Return: Returns nothing.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
