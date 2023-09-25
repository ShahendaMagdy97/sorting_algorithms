#include "sort.h"

void swonrs_inits(int *d,
int *k);
int hoareas_partttion(int *array,
size_t size, int left, int right);
void hoareas_sort(int *array, size_t size,
int left, int right);
void quick_sort_hoare(int *array,
size_t size);

/**
 * swonrs_inits - Replace two of an array's items.
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
 * hoareas_partttion - Arranged subset of a number array
 *  on the basis of the Hoare Partitioning pattern.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * @left: The beginning value of the subset is used to order.
 * @right: The ending value of the subset is used to order.
 * Return: The final value of the partittion.
 * Description: Implementing the partittion's final content as the point
 * proceed every two items alter, display the array.
 */

int hoareas_partttion(int *array,
size_t size, int left,
int right)
{
int pioatt,
abzeq,
under;

pioatt =
array[right];
abzeq =
left - 1;
under =
right + 1;

for (; abzeq <
under;)
{
for (; array[++abzeq]
< pioatt;)
{

}

for (; array[--under] >
pioatt;)
{

}

if (abzeq <
under)
{
swonrs_inits(array + abzeq,
array + under);
print_array(array,
size);
}
}

return (abzeq);
}


/**
 * hoareas_sort - Recursion is utilized to perform the quicksort algorithm.
 * @array: Arranging an array of numbers.
 * @size: The boundaries of the size of the array.
 * @left: The partittion of array arrang's primary value.
 * @right: The partittion of array arrang's final value in the pattern
 * Description: implement the Hoare partitioning way.
 */

void hoareas_sort(int *array,
size_t size,
int left,
int right)
{
int sect;

if (right - left > 0)
{
sect =
hoareas_partttion(array, size,
left,
right);
hoareas_sort(array, size,
left, sect - 1);
hoareas_sort(array, size,
sect, right);
}
}

/**
 * quick_sort_hoare - number arrays must be ordered in ascending order
 * implementing the quicksort way to order.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: implementing the Hoare partitioning way. displays
 * the array every time two elemnts are altered.
 */

void quick_sort_hoare(int *array,
size_t size)
{
if (array ==
NULL ||
size < 2)
return;

hoareas_sort(array,
size,
0,
size - 1);
}
