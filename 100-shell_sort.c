#include "sort.h"

/**
 * swonrs_inits - Alternate two integers in an array.
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
 * shell_sort - Arranging numbers arrays should be done ascending.
 * Applying the shell sort algorithm, arrange.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: The Knuth interval hierarchy is applied.
 */

void shell_sort(int *array,
size_t size)
{
size_t nus,
k,
v;

if (array ==
NULL ||
size < 2)
return;

nus = 1;
for (; nus < (size / 3); nus =
nus * 3 + 1)
{
}

for (; nus >= 1;
nus /= 3)
{
for (k = nus; k
< size; k++)
{
for (v = k; v >=
nus && array[v - nus] >
array[v]; v -= nus)
{
swonrs_inits(array + v,
array + (v - nus));
}
}
print_array(array,
size);
}
}
