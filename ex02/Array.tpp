#include "Array.hpp"
#include <cstddef>
#include <stdexcept>

template <typename T>
Array<T>::Array(): data(new T[0]()), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n): data(new T[n]()), length(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other): data(NULL), length(other.length) {
	if (length > 0)
	{
		this->data = new T[length];
		for (unsigned int i = 0; i < length; ++i)
			this->data[i] = other.data[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this == &other)
		return *this;

	T *tmp = new T[other.length];
	for (unsigned int i = 0; i < other.length; ++i)
		tmp[i] = other.data[i];

	delete[] this->data;
	this->data = tmp;
	this->length = other.length;

	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->data;
}

template <typename T>
const T& Array<T>::operator[](unsigned int idx) const {
	if (idx >= length)
		throw std::out_of_range("Array index out of bounds");
	return data[idx];
}

template <typename T>
T& Array<T>::operator[](unsigned int idx) {
	if (idx >= length)
		throw std::out_of_range("Array index out of bounds");
	return data[idx];
}

template <typename T>
unsigned int Array<T>::size() const {
	return length;
}