#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node at a certain index
  * @head: pointer to the first element in the list
  * @index: index of the node to delete
  * Return: 1 (Success), or -1 (Fail)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *del_node = NULL;
	unsigned int a = 0;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (a < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		a++;
	}

	del_node = ptr->next;
	ptr->next = del_node->next;
	free(del_node);

	return (1);
}
