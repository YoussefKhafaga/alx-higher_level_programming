#include "lists.h"
/**
 * check_cycle - checks if there is a cycle in a linked list
 * @list: linked list pointer
 * Return: 0 if no cycle 1 otherwise
 */
int check_cycle(listint_t *list)
{
	int flag = list->n;

	while(list->next)
	{
		list = list->next;
		if (flag == list->n)
		{
			return (1);
		}
	}
	return (0);
}
