#include "lists.h"
/**
 * check_cycle - checks if there is a cycle in a linked list
 * @list: linked list pointer
 * Return: 0 if no cycle 1 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	if (!list || !list->next)
	{
		return (0);
	}
	while(fast && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			return (1);
		}
	}
	return (0);
}
