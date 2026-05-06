// Task 03 [The number of local extreme numbers]
// Количество локальных минимумов и максимумов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"

int find_local_minimums(int* array, int size) {
	if (size < 2) {
		return 0;
	}

	int count = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) < *(array + i + 1)
			&& *(array + i) < *(array + i - 1)) {
			count++;
		}
	}
	count += (*array < *(array + 1)) ? 1 : 0;
	count += (*(array + size - 1) < *(array + size - 2)) ? 1 : 0;

	return count;
}


int find_local_maximums(int* array, int size) {
	if (size < 2) {
		return 0;
	}

	int count = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) > *(array + i + 1)
			&& *(array + i) > *(array + i - 1)) {
			count++;
		}
	}
	count += (*array > *(array + 1)) ? 1 : 0;
	count += (*(array + size - 1) > *(array + size - 2)) ? 1 : 0;

	return count;
}

int count_local_extreme_numbers(int* array, int size) {

	if (size < 2) {
		return 0;

	}
	int count_local_max = find_local_maximums(array, size);
	int count_local_min = find_local_minimums(array, size);

	return count_local_max + count_local_min;
}