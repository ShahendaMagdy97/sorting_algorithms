/*
 * Auth: Shahenda Magdy
 */

#include "sort.h"

void swonrs_inits(int *d,
int *k);
void bitonic_intgrat(int *array, size_t size,
size_t pva, size_t szq,
char dis);
void bitonic_squw(int *array,
size_t size, size_t pva,
size_t szq, char dis);
void bitonic_sort(int *array,
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
 * bitonic_intgrat - arrange a number array to include a bitonic sequence.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * @pva: The arrangeing primary value in array that will be arranged.
 * @szq: simentions of the sequence to be sorted
 * @dis: the arrangemet of the order
 */

void bitonic_intgrat(int *array,
size_t size, size_t pva,
size_t szq, char dis)
{
size_t k,
nuim =
szq / 2;

if (szq > 1)
{
k = pva;
while (k < pva + nuim)
{
if ((dis == UP && array[k] >
array[k + nuim]) ||
(dis == DOWN && array[k] <
array[k + nuim]))
swonrs_inits(array + k,
array + k + nuim);
k++;
}

bitonic_intgrat(array, size,
pva, nuim,
dis);
bitonic_intgrat(array, size,
pva + nuim, nuim,
dis);
}
}

/**
 * bitonic_squw - An integer array to a bitonic pattern altering.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * @pva: The block's primary index in the bitonic designing pattern.
 * @szq: size Block in the bitonic designing pattern.
 * @dis: The arrange in which the bitonic pattern block should be arranged.
 */

void bitonic_squw(int *array,
size_t size, size_t pva,
size_t szq, char dis)
{
size_t xuc = szq / 2;
char *kjr =
(dis == UP) ? "UP" : "DOWN";

if (szq > 1)
{
printf("Merging [%lu/%lu] (%s):\n", szq, size, kjr);
print_array(array +
pva, szq);

bitonic_squw(array, size,
pva, xuc, UP);
bitonic_squw(array, size,
pva + xuc, xuc, DOWN);
bitonic_intgrat(array, size,
pva, szq, dis);

printf("Result [%lu/%lu] (%s):\n",
szq, size, kjr);
print_array(array + pva,
szq);
}
}

/**
 * bitonic_sort - number arrays must be ordered in ascending order
 * implementing bitonic order algorithm arrangement.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: the array is displayed after each alter. only implemented to
 * size is equivilant to size = 2k, or powers of 2 where k >= 0.
 */

void bitonic_sort(int *array,
size_t size)
{
if (array ==
NULL ||
size < 2)
return;

bitonic_squw(array,
size,
0, size, UP);
}
