#include <stdio.h>
#incldue "lists_.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t to print
 * Return: the number of modes printed
 */
size_t print _list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++
	}
	return (s);
}
