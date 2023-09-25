#include "lists.h"
/**
  * print_listint - print all the elements of the list
  * @h: first element of the list
  * Return: the number of element in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

