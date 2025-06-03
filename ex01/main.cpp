#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	printElement(T in)
{
	std::cout << in << " ";
}

int main()
{
	int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	::iter(num, 10, printElement<int>);
	std::cout<<std::endl;

	const std::string arr2[] = {"this", "is", "not", "an", "example"};

	iter(arr2, 5, printElement<std::string>);
	std::cout << std::endl;

	return (0);
}