#include "ClassSecond.h"

int ClassSecond::func() {

	if (!getArray()) return 0;

	int temp = 0;

	for (size_t i = 0; i < getSize(); i++) {

		temp += getArray()[i];
	}

    return temp;
}