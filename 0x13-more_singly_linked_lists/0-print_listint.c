#include "lists.h"

/**

print_listint - prints all elements in a singly linked list

@h: pointer to the head node of the list

Return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

if (h == NULL) /* return 0 for an empty list */
return (node_count);

while (h) /* loop through the list while the current node is not NULL /
{
printf("%d\n", h->n);
h = h->next; / move to the next node /
node_count++; / increment node count */
}

return (node_count);
}
