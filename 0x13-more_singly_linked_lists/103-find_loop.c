#include "lists.h"

/**
  * find_listint_loop - finds the loop in a linked list
  * @head: linked list to search for
  * Return: address of the node where the loop starts, or NULL
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *tmp = head;

	if (head == 0)
		return (0);

	while (ptr && tmp && tmp->next)
	{
		tmp = tmp->next->next;
		ptr = ptr->next;
		if (tmp == ptr)
		{
			ptr = head;
			while (ptr != tmp)
			{
				ptr = ptr->next;
				tmp = tmp->next;
			}
			return (tmp);
		}
	}

	return (0);
}
