#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
	private:
		T* data;
		unsigned int length;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array<T>& operator=(const Array& other);
		~Array();
		T& operator[](unsigned int idx);
		const T& operator[](unsigned int idx) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif