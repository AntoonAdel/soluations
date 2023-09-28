#include "lists.h"

/**
  * free_listint_safe - frees a listint_t list (can free lists with a loop)
  * @h: pointer to head of singly linked list
  * Return: the size of the list that was free’d
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr = *h, *tmp;
	unsigned int num = 0;

	if (ptr == 0 || h == 0)
		return (0);

	ptr = *h;
	while (ptr != 0)
	{
		tmp = ptr;
		ptr = ptr->next;
		num++;

		free(tmp);

		if (tmp <= ptr)
			break;
	}

	*h = 0;
	return (num);
}
