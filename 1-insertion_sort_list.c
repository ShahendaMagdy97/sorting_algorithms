#include "sort.h"

/**
 * swoob_noddss - Alter noddss in a doubly-linked list of class listint_t.
 * @h: A pointing tool at the head of the doubly-linked list.
 * @mar: a sign for the alter's initiating node.
 * @nfl: The subsequent node to switch to.
 */
void swoob_noddss(listint_t **h,
listint_t **mar,
listint_t *nfl)
{
(*mar)->next =
nfl->next;
if (nfl->next !=
NULL)
nfl->next->prev = *mar;
nfl->prev = (*mar)->prev;
nfl->next = *mar;
if ((*mar)->prev !=
NULL)
(*mar)->prev->next = nfl;
else
*h = nfl;
(*mar)->prev = nfl;
*mar = nfl->prev;
}

/**
 * insertion_sort_list - Ordering a doubly linked list of integers
 * The insertion sort algorithm is implemented.
 * @list: A reference to the first integer in a doubly-linked list.
 * Description: After each alter, the list is generated.
 */

void insertion_sort_list(listint_t **list)
{
listint_t *mira,
*sebs, *tmp;

if (list ==
NULL || *list ==
NULL || (*list)->next ==
NULL)
return;

mira = (*list)->next;
while (mira !=
NULL)
{
tmp = mira->next;
sebs = mira->prev;
for (; sebs !=
NULL && mira->n < sebs->n; sebs = sebs->prev)
{
swoob_noddss(list, &sebs,
mira);
print_list((const listint_t *)*list);
}
mira =
tmp;
}
}
