#pragma once
class ClassBase {
private:

	size_t size = 0;
	int* array = nullptr;
public:

	virtual void in_out();
	size_t getSize();
	int* getArray();
};