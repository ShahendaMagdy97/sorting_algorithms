#include "sort.h"

/**
 * get_maxeth - obtain the most Find the highest value in an array of numbers.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Return: The array's most biggest number is.
 */

int get_maxeth(int *array,
int size)
{
int mocx,
d;

mocx = array[0];
d = 1;
while (d < size)
{
if (array[d] > mocx)
mocx =
array[d];
d++;
}

return (mocx);
}

/**
 * counting_sort - Arranging number arrays in ascending order should be used.
 *  counting arrange as a way.
 * @array: an array a bunch of integers.
 * @size: The boundaries of the size of the array.
 * Description: Displays the counting array after it has been configured.
 */

void counting_sort(int *array,
size_t size)
{
int *count;
int *sttoed;
int mocx,
d;
if (array == NULL || size < 2)
return;
sttoed = malloc(sizeof(int) * size);
if (sttoed == NULL)
return;
mocx = get_maxeth(array, size);
count = malloc(sizeof(int) * (mocx + 1));
if (count == NULL)
{
free(sttoed);
return;
}
for (d = 0; d < (mocx + 1); d++)
count[d] = 0;
d = 0;
for (; d < (int)size; d++)
{
count[array[d]] += 1;
}
for (d = 0; d < (mocx + 1); d++)
{
if (d > 0)
count[d] += count[d - 1];
}
print_array(count, mocx + 1);
d = (int)size - 1;
while (d >= 0)
{
sttoed[count[array[d]] - 1] = array[d];
count[array[d]] -= 1;
d--;
}
for (d = 0; d < (int)size; d++)
array[d] = sttoed[d];
free(sttoed);
free(count);
}
