#include "sort.h"

/**
 * swonrs_inits - Replace two of an array's items.
 * @d: The first memb. to make the replace
 * @k: The second memb. to make the replace
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
 * bubble_sort - Ordering a bunch of integers in ascending sequence.
 * @array: A bunch is an array of integers that can be sorted.
 * @size: The boundaries of the size of the array.
 * Description: After each swapped memory, the array is printed.
 */
void bubble_sort(int *array,
size_t size)
{
size_t d,
lnss = size;
boylen babbei =
false;

if (array ==
NULL ||
size < 2)
return;

while (babbei ==
false)
{
babbei =
true;
d = 0;
while (d < lnss - 1)
{
if (array[d] > array[d + 1])
{
swonrs_inits(array + d,
array + d + 1);
print_array(array, size);
babbei = false;
}
d++;
}
lnss--;
}
}
