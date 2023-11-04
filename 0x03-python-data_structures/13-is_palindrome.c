#include "lists.h"
/**
 * is_palindrome - checks if a list is palindrome
 * @head: head of the linked list
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *fast = (*head), *slow = (*head), *temp = NULL, *prev = NULL;

	if (!*(head))
	{
		return (1);
	}
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		temp = slow;
		slow = slow->next;
		temp->next = prev;
		prev = temp;
	}
	if (fast != NULL)
	{
		slow = slow->next;
	}
	while (slow->next != NULL)
	{
		if (slow->n != prev->n)
		{
			return (0);
		}
		slow = slow->next;
		prev = prev->next;
	}
	return (1);
}

