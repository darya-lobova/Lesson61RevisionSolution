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

void print_test(int* array, int size, int* expected, int start, int end, bool type, string test_name) {
	sort_in_range(array, size, start, end, type);

	bool result = true;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) != *(expected + i)) {
			result = false;
			break;
		}
	}

	cout << test_name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (!result && size > 0) {
		cout << "Current array: " << convert(array, size) << endl;
		cout << "Expected array: " << convert(expected, size) << endl;
		cout << "Option: sort by " << (type ? "ascending" : "descending")
			<< " in range between " << start << " and " << end << endl;
	}

	cout << "\033[1;33m";
	cout << "----------------------------------------------------" << endl;
	cout << "\033[0m";
}