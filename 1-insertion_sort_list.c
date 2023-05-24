#include "sort.h"

/**
 * insertion_sort_list - function to sort a linked list in ascending order
 * @list: The linked list
 *
 * Using insertion sort algorithm to sort a doubly linked list
 *
 * Return: Always void
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL, *temp = NULL, *aux = NULL;

	if (!list)
		return;
	head = *list;
	while (head)
	{
		temp = head;
		while (temp->prev && temp->n < temp->prev->n)
		{
			aux = temp;
			temp = temp->prev;
			temp->next = aux->next;
			if (aux->next)
				aux->next->prev = temp;
			aux->next = temp;
			aux->prev = temp->prev;
			if (temp->prev)
			{
				temp->prev->next = aux;
				temp->prev = aux;
			}
			else
				temp->prev = aux;
			while (aux->prev)
				aux = aux->prev;
			print_list(aux);
			temp = temp->prev;
		}
		head = head->next;
	}
	while (temp->prev)
		temp = temp->prev;
	(*list) = temp;
}
