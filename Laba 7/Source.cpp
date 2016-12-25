#include "Array.h"
#include <iostream>
#include <ctime>
#include "Vector.h"

template <class T>
Array<T> minimum(Array<T> arr, T min) {
	int size = 0;
	Array<T> result(arr.getSize());
	for (int i = 0; i < arr.getSize(); i++) {
		T elem = arr.getElement(i);
		if (elem < min) {
			result.setElement(size, elem);
			size++;
		}
	}
	result.setSize(size);
	return result;
}

int main() {
	srand(time(0));

	Array<int>arri(20);
	for (int i = 0; i < arri.getSize(); i++) {
		arri.setElement(i, rand() % 100);
	}
	std::cout << arri << std::endl;
	std::cout << minimum(arri, 50) << std::endl << std::endl;

	Array<char>arrc(25);
	for (int i = 0; i < arrc.getSize(); i++) {
		arrc.setElement(i, rand() % ('z' - 'a' + 1) + 'a');
	}
	std::cout << arrc << std::endl;
	std::cout << minimum(arrc, 'k') << std::endl << std::endl;

	Array<double>arrd(15);
	for (int i = 0; i < arrd.getSize(); i++) {
		arrd.setElement(i, (double)(rand() % 10000) / 100);
	}
	std::cout << arrd << std::endl;
	std::cout << minimum(arrd, 50.0) << std::endl << std::endl;

	Array<Vector> v(10);
	for (int i = 0; i < v.getSize(); i++) {
		v[i] = Vector(rand() % 11 - 5, rand() % 11 - 5);
	}
	std::cout << v << std::endl;
	std::cout << minimum(v, Vector(2, 3)) << std::endl << std::endl;

	return 0;
}
