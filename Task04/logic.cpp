// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.

int find_max_element(int* array, int size) {
	int max = *array;
	int num_of_element = 1;


	for (int i = 1; i < size; i++) {
		if (*(array + i) > max) {
			max = *(array + i);
		}
	}
	return max;

}
int find_min_element(int* array, int size) {
	int min = *array;
	int num_of_element = 1;


	for (int i = 0; i < size; i++) {
		if (*(array + i) < min) {
			min = *(array + i);
		}
	}
	return min;
}

	double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
		int max = find_max_element(array, size);
		int min = find_min_element(array, size);
		if (size < 2) {
			return 0;
		}
		

	
		
		double sum = 0;
		int count = 0;

		for (int i = 0; i < size; i++)
		{
			if (*(array + i) != max || *(array + i) != min) {
				sum += *(array + i);
				count++;
			}
		}
		
		if (count == 0) {
			return 0;
		}

		return sum / count;

	}