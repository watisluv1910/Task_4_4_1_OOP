#include "ClassThird.c++"

int main() {

	ClassThird* object = new ClassThird;
	object->ClassBase::in_out();
	object->ClassThird::in_out();
}