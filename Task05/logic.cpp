// Task 05 [The sum of elements between first extreme elements]
// Сумма элементов между первыми экстримальными элементами  
// 
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет сумму элементов вектора, расположенных
// между первыми максимальным по модулю и минимальным по модулю элементами.

int sum_between_first_min_max(int* array, int size) {
    if (size <= 1 || array == nullptr) {
        return 0;
    }

    int* max_ptr = array; 
    int* min_ptr = array; 

    for (int* p = array + 1; p < array + size; p++) {
        
        int cur_abs = (*p < 0) ? -(*p) : *p;
        int max_abs = (*max_ptr < 0) ? -(*max_ptr) : *max_ptr;
        int min_abs = (*min_ptr < 0) ? -(*min_ptr) : *min_ptr;

        if (cur_abs > max_abs) {
            max_ptr = p; 
        }
        if (cur_abs < min_abs) {
            min_ptr = p; 
        }
    }

    int* start = (min_ptr < max_ptr) ? min_ptr : max_ptr;
    int* end = (min_ptr < max_ptr) ? max_ptr : min_ptr;

    int sum = 0;
  
    for (int* p = start + 1; p < end; p++) {
        sum += *p;
    }

    return sum;
}