#include "sort.h"

void merge_sunam(int *supry, int *byfs, size_t flout, size_t inbt,
size_t bckk);
void merge_sort_reconnd(int *supry, int *byfs, size_t flout, size_t bckk);
void merge_sort(int *array, size_t size);

/**
 * merge_sunam - arrange an number subarray.
 * @supry: a array of numbers with a subarray for arranging.
 * @byfs: a buffer that will keep the choosed subarray.
 * @flout: flout index of array
 * @inbt: middle index of array
 * @bckk:  bckk index of array
 */

void merge_sunam(int *supry,
int *byfs, size_t flout,
size_t inbt,
size_t bckk)
{
size_t d, v,
w = 0;

printf("Merging...\n[left]: ");
print_array(supry + flout, inbt - flout);

printf("[right]: ");
print_array(supry +
inbt, bckk - inbt);

for (d = flout, v = inbt; d
< inbt && v < bckk;)
{
byfs[w++] =
(supry[d] < supry[v]) ?
supry[d++] : supry[v++];
}
for (; d < inbt;)
{
byfs[w++]
= supry[d++];
}
for (; v < bckk;)
{
byfs[w++] =
supry[v++];
}
for (d = flout, w = 0; d < bckk;)
{
supry[d++] =
byfs[w++];
}
printf("[Done]: ");
print_array(supry + flout,
bckk - flout);
}

/**
 * merge_sort_reconnd - equip recursion to make merge ordering algorithm.
 * @supry: a array of numbers with a subarray for arranging.
 * @byfs: a buffer to maintain the output in it
 * @flout: flout index of array
 * @bckk: bckk index of suparray
 */

void merge_sort_reconnd(int *supry, int *byfs, size_t flout, size_t bckk)
{
size_t inbt;

if (bckk - flout > 1)
{
inbt =
flout + (bckk - flout) / 2;
merge_sort_reconnd(supry,
byfs,
flout, inbt);
merge_sort_reconnd(supry,
byfs,
inbt, bckk);
merge_sunam(supry,
byfs, flout,
inbt, bckk);
}
}

/**
 * merge_sort - number arrays must be ordered in ascending order
 *  implementing the merge order method to order.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: implement top-down merge order performing.
 */

void merge_sort(int *array,
size_t size)
{
int *byfs;

if (array ==
NULL ||
size < 2)
return;

byfs = malloc(sizeof(int) * size);
if (byfs ==
NULL)
return;

merge_sort_reconnd(array,
byfs, 0,
size);

free(byfs);
}
