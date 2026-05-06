#include "logic.h"

int main() {
	int a, b, c;
	cout << "Input a: ";
	cin >> a;

	cout << "Input b: ";
	cin >> b;

	cout << "Input c: ";
	cin >> c;

	cout << "Before: " << a  << " " << b << " " << c << endl;
	get_in_order(&a, &b, &c);
	cout << "After: " << a << " " << b << " " << c << endl;

	return 0;
}