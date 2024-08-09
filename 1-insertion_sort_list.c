#include "sort.h"

/**
 *swap_nodes - Swaps two nodes in a doubly linked list.
 *@head: Double pointer to the head of the list.
 *@first: The first node prior to swapping.
 *@second: The second node prior to swapping.
 *
 *Return: void.
 */
void swap_nodes(listint_t **head, listint_t *first, listint_t *second)
{
	if (first == NULL || second == NULL)
		return;

	/* Handling case of first also being head */
	if (first->prev)
		first->prev->next = second;
	else
		*head = second;

	if (second->next)
		second->next->prev = first;

	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->next = first;
}


/**
 *insertion_sort_list - Sorts a doubly linked list in ascending order.
 *@list: Double pointer to the first element of the list.
 *
 *Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = (*list)->next, *key, *prev_node;

	if (!list || !(*list))
		return;

	while (curr)
	{
		key = curr;
		prev_node = curr->prev;

		while (prev_node && key->n < prev_node->n)
		{
			swap_nodes(list, prev_node, key);
			prev_node = key->prev;
			print_list(*list);
		}
		curr = curr->next;
	}
}
