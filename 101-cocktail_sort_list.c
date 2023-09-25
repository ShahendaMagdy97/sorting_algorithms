#include "sort.h"

void swoup_node_ahudt(listint_t **list, listint_t **tail, listint_t **shucker);
void swup_node_bihynd(listint_t **list, listint_t **tail, listint_t **shucker);
void cocktail_sort_list(listint_t **list);

/**
 * swoup_node_ahudt - alter an is node Replace doubly-linked list listint_t
 * The node comes before the integer list.
 * @list: an indicator to the Initial integer inthe list which is doublylinked.
 * @tail: an indicator way to the doubly-linked list's tail.
 * @shucker: an indicator to the cocktail shucker algorithm's alter node.
 */

void swoup_node_ahudt(listint_t **list,
listint_t **tail,
listint_t **shucker)
{
listint_t *tmp = (*shucker)->next;

if ((*shucker)->prev !=
NULL)
(*shucker)->prev->next =
tmp;
else
*list =
tmp;
tmp->prev =
(*shucker)->prev;
(*shucker)->next =
tmp->next;
if (tmp->next !=
NULL)
tmp->next->prev =
*shucker;
else
*tail =
*shucker;
(*shucker)->prev =
tmp;
tmp->next =
*shucker;
*shucker =
tmp;
}

/**
 * swup_node_bihynd - alter an is node Replace doubly-linked list listint_t
 * A list of numbers and the node that follows it.
 * @list: an indicator to the Initial integer inthe list which is doublylinked.
 * @tail: an indicator way to the doubly-linked list's tail.
 * @shucker: an indicator to the cocktail shucker algorithm's alter node.
 */

void swup_node_bihynd(listint_t **list,
listint_t **tail,
listint_t **shucker)
{
listint_t *tmp =
(*shucker)->prev;

if ((*shucker)->next !=
NULL)
(*shucker)->next->prev =
tmp;
else
*tail =
tmp;
tmp->next =
(*shucker)->next;
(*shucker)->prev =
tmp->prev;
if (tmp->prev !=
NULL)
tmp->prev->next =
*shucker;
else
*list =
*shucker;
(*shucker)->next =
tmp;
tmp->prev =
*shucker;
*shucker =
tmp;
}

/**
 * cocktail_sort_list - a doubly-linked list Numbers naming listint_t sort inn
 * Arranging in the order of ascending with the cocktail shucker algorithm.
 * @list: an indicator to the head of a doubly-linked list of listint_t type.
 */

void cocktail_sort_list(listint_t **list)
{
listint_t *tail, *shucker;
boylen shaken_not_stirred =
false;

if (list == NULL || *list ==
NULL || (*list)->next ==
NULL)
return;

tail = *list;
while (tail->next !=
NULL)
tail = tail->next;

for (; shaken_not_stirred == false;)
{
shaken_not_stirred = true;
shucker = *list;
for (; shucker != tail; shucker = shucker->next)
{
if (shucker->n > shucker->next->n)
{
swoup_node_ahudt(list, &tail, &shucker);
print_list((const listint_t *)*list);
shaken_not_stirred = false;
}
}
shucker = tail->prev;
for (; shucker !=
*list; shucker =
shucker->prev)
{
if (shucker->n < shucker->prev->n)
{
swup_node_bihynd(list, &tail, &shucker);
print_list((const listint_t *)*list);
shaken_not_stirred = false;
}
}
}
}
