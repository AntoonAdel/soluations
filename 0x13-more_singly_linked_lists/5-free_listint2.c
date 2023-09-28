#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint2 - frees memory of a list
  * @head: pointer to head of singly linked list
  * Return: No Return
  */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head != 0)
	{
		while (*head != 0)
		{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
		}
	}
}
