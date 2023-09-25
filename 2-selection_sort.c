#include "sort.h"

/**
 * swonrs_inits - alter two integers in the array.
 * @d: The initialy integer to alter.
 * @k: The secondly integer to alter.
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
 * selection_sort - Ordering integer arrays in ascending order
 * picking the ordering algorithm.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: After each swapped memory, the array is printed.
 */

void selection_sort(int *array,
size_t size)
{
int *lea;
size_t d,
k;

if (array ==
NULL || size < 2)
return;

for (d = 0; d < size - 1; d++)
{
lea = array + d;
for (k = d + 1; k < size; k++)
{
lea = (array[k] < *lea) ?
(array + k) : lea;
}

if ((array + d) !=
lea)
{
swonrs_inits(array +
d, lea);
print_array(array,
size);
}
}
}
