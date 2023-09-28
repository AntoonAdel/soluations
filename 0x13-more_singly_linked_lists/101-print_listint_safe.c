#include "lists.h"

/**
  * find_listint_loop_pl - finds a loop in a linked list
  * @head: linked list to search
  * Return: address of node where loop starts/returns, NULL if no loop
  */

listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *tmp, *fin;

	if (head == 0)
		return (0);

	for (fin = head->next; fin != 0; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (tmp = head; tmp != fin; tmp = tmp->next)
			if (tmp == fin->next)
				return (fin->next);
	}
	return (0);
}

/**
  * print_listint_safe - prints a linked list, even if it
  * has a loop
  * @head: head of list to print
  * Return: number of nodes printed
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t l = 0;
	int lop;
	listint_t *ptr;

	ptr = find_listint_loop_pl((listint_t *) head);

	for (l = 0, lop = 1; (head != ptr || lop) && head != 0; l++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == ptr)
			lop = 0;
		head = head->next;
	}

	if (ptr != 0)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (l);
}
