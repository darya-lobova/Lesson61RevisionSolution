// Task 06 [The sorting from the specified range]
// Сортировка из указанного промежутка
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая сортирует часть элементов заданного вектора
// в указанном диапазоне порядковых номеров либо по возрастанию, 
// либо по убыванию.

void sort_in_range(int* array, int size, int start, int end, bool type) {
    if (array == nullptr || size <= 0) {
        return;
    }

    if (start < 0 || start >= size || end < 0 || end >= size) {
        return;
    }

    int actual_start = (start < end) ? start : end;
    int actual_end = (start < end) ? end : start;

    int* p_start = array + actual_start;
    int* p_end = array + actual_end;

    for (int* i = p_start; i < p_end; i++) {
        int* extreme = i;

        for (int* j = i + 1; j <= p_end; j++) {
            if (type) { 
                if (*j < *extreme) extreme = j;
            }
            else {    
                if (*j > *extreme) extreme = j;
            }
        }

        if (extreme != i) {
            int temp = *i;
            *i = *extreme;
            *extreme = temp;
        }
    }
}
