#include "iostream"
#include "iomanip"
#include "ClassThird.h"

using std::cout;

void ClassThird::in_out() {

	cout << "Array dimension: " << getSize() << '\n';

	cout << "The original array:";
	for (size_t i = 0; i < getSize(); i++) {

		cout << std::setw(5) << getArray()[i];
	}
	cout << '\n';

	cout << "Min: " << ClassFirst::func() << '\n'
		<< "Sum: " << ClassSecond::func();
}