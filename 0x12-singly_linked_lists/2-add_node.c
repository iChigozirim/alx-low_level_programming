#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *          Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *dupstr;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dupstr = strdup(str);
	if (!dupstr)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupstr;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

