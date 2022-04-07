#include <iostream>
#include "ClassBase.h"

using std::cin;

void ClassBase::in_out() {

	cin >> size;

	array = new int[size];

	for (size_t i = 0; i < size; i++) {

		cin >> array[i];
	}
}

size_t ClassBase::getSize() {

	return size;
}

int* ClassBase::getArray() {

	return array;
}
