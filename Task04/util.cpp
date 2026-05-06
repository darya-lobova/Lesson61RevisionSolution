#include "util.h"

string convert(int* array, int size) {
	if (size <= 0) {
		return "";
	}

	string s = to_string(*array);

	for (int i = 1; i < size; i++)
	{
		s += " " + to_string(*(array + i));
	}

	return s;
}

void print_test(int* array, int size, double expected, string test_name) {
	double actual = calculate_arithmetical_mean_of_nonextreme_elements(array, size);
	bool result = actual == expected;

	cout << test_name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (!result && size > 0) {
		cout << "Array: " << convert(array, size) << endl;
		cout << "Result of arithmetical mean: expected = " << expected
			<< ", but actual = " << actual << endl;
	}


	cout << "\033[1;33m";
	cout << "--------------------------------------------------------------" << endl;
	cout << "\033[0m";
}