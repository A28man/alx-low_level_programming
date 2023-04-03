#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: a pointer to the adress of the head of the lidtint_t list
 *
 * Return: if the linked list is empty - 0
 * otherwise - the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->next;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
