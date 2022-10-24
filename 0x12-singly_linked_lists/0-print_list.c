#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the start of the list
* Return: number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		temp = temp->next;
	}
	return (i);
}
