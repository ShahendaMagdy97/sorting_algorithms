#include "sort.h"

void swonrs_inits(int *d,
int *k);
int lunger_partittion(int *array, size_t size, int left, int right);
void lunger_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array,
size_t size);

/**
 * swonrs_inits - Replace two of an array's items.
 * @d: the primary altered integer.
 * @k: The proceeded integer to be altered.
 */

void swonrs_inits(int *d,
int *k)
{
int tmp;
tmp =
*d;
*d =
*k;
*k =
tmp;
}

/**
 * lunger_partittion - A subsection of an integer array in the following
 * the final element of the lomutoss partittion diagram (pioatt).
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * @left: The primary value of the subsection is used to order.
 * @right: The last value is used for arranging the subsection.
 * Return: The finally value of the partittion.
 */

int lunger_partittion(int *array,
size_t size, int left,
int right)
{
int *pioatt;
int aboave,
under;

pioatt =
array +
right;
aboave =
under =
left;

for (; under < right; under++)
{
if (array[under] < *
pioatt)
{
if (aboave < under)
{
swonrs_inits(array +
under, array +
aboave);
print_array(array,
size);
}
aboave++;
}
}

if (array[aboave]
> *pioatt)
{
swonrs_inits(array + aboave,
pioatt);
print_array(array,
size);
}

return (aboave);
}

/**
 * lunger_sort - through recurssion quicksort algorithm can be done .
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * @left: The Primary Value of the array partittion to arrange.
 * @right: The lastly value of the array partittion to arrange.
 * Description: Uses the Lomuto partittion scheme.
 */

void lunger_sort(int *array, size_t size,
int left, int right)
{
int sect;

if (right - left > 0)
{
sect =
lunger_partittion(array, size,
left, right);
lunger_sort(array, size,
left, sect - 1);
lunger_sort(array, size,
sect + 1, right);
}
}

/**
 * quick_sort - order Integer arrays in an ascending pattern
 * by using the quicksort way to order.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: implement the Lomuto partittioning way. display
 * the array after each 2 items alter.
 */

void quick_sort(int *array,
size_t size)
{
if (array ==
NULL ||
size < 2)
return;

lunger_sort(array, size, 0,
size - 1);
}
