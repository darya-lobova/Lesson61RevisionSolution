#include "util.h"

void print(string s) {
	cout << s;
}
void init_random(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % (b - a + 1) + a;
	}
}