#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
