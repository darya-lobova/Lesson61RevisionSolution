#include "util.h"

int main() {
	int size;
	int a = 2, b = 5;

	cout << "Input number of marks: ";
	cin >> size;

	if (size <= 0) {
		return 0;
	}

	 int* array = new int[size];

	 init_random(array, size,  2, 5);

	 for (int* p = array; p < array + size; p++) {
		 cout << *p << " ";
	 }

	 cout << "\n";

	 int count5, count4, count3, count2;

	 calculate_exam_results(array, size, count5, count4, count3, count2);

	 print("Results of exam: \n");

	 cout << "Excellent - 5: " << (count5 * 100.0 / size) << " % (" << count5 << ")" << endl;
	 cout << "Great - 4: " << (count4 * 100.0 / size) << " % (" << count4 << ")" << endl;
	 cout << "Okay - 3: " << (count3 * 100.0 / size) << " % (" << count3 << ")" << endl;
	 cout << "Bad - 2: " << (count2 * 100.0 / size) << " % (" << count2 << ")" << endl;

	 delete[] array;

	 return 0;
}