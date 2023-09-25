#include "sort.h"

void swonrs_inits(int *d, int *k);
void max_hapefying(int *array, size_t size, size_t botm, size_t roat);
void heap_sort(int *array, size_t size);

/**
 * swonrs_inits - alter two numbers in an array
 * @d: the primary altered number.
 * @k: the following number to be altered
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
 * max_hapefying - from a binary tree display a complete binary heap
 * @array: a binary tree displayed as an array of numbers.
 * @size: the dimentions of the tree's size.
 * @botm: the value of the tree's botm row.
 * @roat: the binary tree's base node.
 */

void max_hapefying(int *array,
size_t size,
size_t botm,
size_t roat)
{
size_t left,
right,
lorge;

left
= 2 * roat + 1;
right =
2 * roat + 2;
lorge =
roat;

if (left < botm &&
array[left] > array[lorge])
lorge =
left;
if (right < botm &&
array[right] > array[lorge])
lorge = right;

if (lorge !=
roat)
{
swonrs_inits(array + roat,
array + lorge);
print_array(array,
size);
max_hapefying(array,
size,
botm, lorge);
}
}

/**
 * heap_sort - number arrays must be ordered in ascending order
 * heap arranding to determine arrange.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: implement sift-down heap ordering
 * algorithm. the array is presented after each alter.
 */

void heap_sort(int *array,
size_t size)
{
int d;

if (array ==
NULL ||
size < 2)
return;

d = (size / 2) - 1;
for (; d >= 0;
--d)
{
max_hapefying(array,
size, size,
d);
}

for (d = size - 1; d > 0; --d)
{
swonrs_inits(array,
array + d);
print_array(array,
size);
max_hapefying(array,
size,
d, 0);
}
}
