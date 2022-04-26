#include "lists.h"


/**
 * print_listint -print elements of the list.
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		 printf(" %d \n", h->n);
		h = h->next;
		count = count + 1;
	}

	return count;
}
