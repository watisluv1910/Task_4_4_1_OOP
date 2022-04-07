#include "ClassFirst.h"

int ClassFirst::func() {

	if (!getArray()) return 0;

    int temp = getArray()[0];

	for (size_t i = 1; i < getSize(); i++) {

		temp -= getArray()[i];
	}

    return temp;
}
