#include "sort.h"

int get_maxeth(int *array, int size);
void radix_cownt_sort(int *array, size_t size,
int nsa, int *byfs);
void radix_sort(int *array, size_t size);

/**
 * get_maxeth - get the most high value in a number array.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Return: the most big interger in the array
 */

int get_maxeth(int *array,
int size)
{
int mocx,
k;

mocx =
array[0];
for (k = 1; k
< size; ++k)
{
if (array[k] > mocx)
mocx =
array[k];
}

return (mocx);
}

/**
 * radix_cownt_sort - a number array indicate numbers be arranged
 * implementing the counting sort way, in ascending order.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * @nsa: The ordering key is the indicated number.
 * @byfs: a buffer for significant array
 */

void radix_cownt_sort(int *array,
size_t size,
int nsa, int *byfs)
{
int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
size_t k = 0;

for (k = 0; k
< size; ++k)
{
count[(array[k] / nsa) % 10] +=
1;
}

for (k = 0; k
< 10; ++k)
{
if (k > 0)
{
count[k] +=
count[k - 1];
}
}

for (k = size - 1;
(int)k >= 0; --k)
{
byfs[count[(array[k] / nsa) % 10] - 1] =
array[k];
count[(array[k] / nsa) % 10] -=
1;
}

for (k = 0; k < size; ++k)
{
array[k] =
byfs[k];
}
}

/**
 * radix_sort - number arrays must be ordered in ascending order
 * implementing the radix order algorithm to sort.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: the LSD radix sort way is performed. displays
 * with each big number increase, the array.
 */

void radix_sort(int *array, size_t size)
{
int mocx, nsa, *byfs;

if (array ==
NULL || size < 2)
return;

byfs = malloc(sizeof(int) * size);
if (byfs ==
NULL)
return;

mocx = get_maxeth(array,
size);
nsa = 1;
for (; mocx / nsa > 0;
nsa *= 10)
{
radix_cownt_sort(array,
size, nsa,
byfs);
print_array(array,
size);
}

free(byfs);
}
