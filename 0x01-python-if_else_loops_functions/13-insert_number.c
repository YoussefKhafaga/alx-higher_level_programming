#include "lists.h"
/**
 * insert_node - inserts a node in a linked list
 * @head: head of the list
 * @number: the number to be inserted
 * Return: address of the new node or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *tmp = *(head);
	new = malloc(sizeof(*new));
	new->n = number;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (tmp)
	{
		if (number >= tmp->n && number <= tmp->next->n)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
