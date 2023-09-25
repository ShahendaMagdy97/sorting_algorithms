#include "deck.h"

int _strexa(const char *f3,
const char *f4);
char get_vlued(deck_node_t *card);
void insztlion_sort_deck_kind(deck_node_t **deck);
void insztlion_sort_deck_valud(deck_node_t **deck);
void sort_deck(deck_node_t **deck);

/**
 * _strexa - two string diffrentiation.
 * @f3: the primary string to be diffrentiated.
 * @f4: the secondly string to be diffrentiated.
 * Return: a renaim of one byte in favor if f3 > f4
 * Zero if f3 == f4
 * If f3 > f4, the byte remain is (-ve)
 */

int _strexa(const char *f3,
const char *f4)
{
while (*f3 &&
*f4 && *f3 ==
*f4)
{
f3++;
f4++;
}

if (*f3 !=
*f4)
return (*f3 -
*f4);
return (0);
}

/**
 * get_vlued - get the card numerical index.
 * @card:a deck_node_t card pointter.
 * Return: The card's numerical index.
 */

char get_vlued(deck_node_t *card)
{
if (_strexa(card->card->value,
"Ace") == 0)
return (0);
if (_strexa(card->card->value,
"1") == 0)
return (1);
if (_strexa(card->card->value,
"2") == 0)
return (2);
if (_strexa(card->card->value,
"3") == 0)
return (3);
if (_strexa(card->card->value,
"4") == 0)
return (4);
if (_strexa(card->card->value,
"5") == 0)
return (5);
if (_strexa(card->card->value,
"6") == 0)
return (6);
if (_strexa(card->card->value,
"7") == 0)
return (7);
if (_strexa(card->card->value,
"8") == 0)
return (8);
if (_strexa(card->card->value,
"9") == 0)
return (9);
if (_strexa(card->card->value,
"10") == 0)
return (10);
if (_strexa(card->card->value,
"Jack") == 0)
return (11);
if (_strexa(card->card->value,
"Queen") == 0)
return (12);
return (13);
}

/**
 * insztlion_sort_deck_kind - From spred to diamnds,oevr deck of cards.
 * @deck: a indicator for the doubly-linked list called deck_node_t.
 */

void insztlion_sort_deck_kind(deck_node_t **deck)
{
deck_node_t *mira;
deck_node_t *sebs;
deck_node_t *tmp;

mira = (*deck)->next;
for (; mira !=
NULL;
mira = tmp)
{
tmp = mira->next;
sebs = mira->prev;
for (; sebs !=
NULL && sebs->card->kind > mira->card->kind; sebs =
mira->prev)
{
sebs->next = mira->next;
if (mira->next !=
NULL)
mira->next->prev = sebs;
mira->prev = sebs->prev;
mira->next = sebs;
if (sebs->prev !=
NULL)
sebs->prev->next = mira;
else
*deck = mira;
sebs->prev = mira;
}
}
}

/**
 * insztlion_sort_deck_valud - arrange a deck of cards begin from the suiit
 *      from spades to diamonds , from ace to king.
 * @deck: a indicator to the doubly-linked list called deck_node_t.
 */

void insztlion_sort_deck_valud(deck_node_t **deck)
{
deck_node_t *mira, *sebs;

mira = (*deck)->next;
for (; mira !=
NULL; mira = mira->next)
{
sebs = mira->prev;
for (; sebs != NULL && sebs->card->kind ==
mira->card->kind && get_vlued(sebs) >
get_vlued(mira); sebs = mira->prev)
{
sebs->next = mira->next;
if (mira->next !=
NULL)
mira->next->prev = sebs;
mira->prev = sebs->prev;
mira->next = sebs;
if (sebs->prev !=
NULL)
sebs->prev->next = mira;
else
*deck = mira;
sebs->prev = mira;
}
}
}

/**
 * sort_deck - arrange the cards of a deck from ace to king, and
 * between spades and diamonds.
 * @deck: a indicator to the doubly-linked list called deck_node_t.
 */

void sort_deck(deck_node_t **deck)
{
if (deck ==
NULL || *deck ==
NULL ||
(*deck)->next ==
NULL)
return;

insztlion_sort_deck_kind(deck);
insztlion_sort_deck_valud(deck);
}
