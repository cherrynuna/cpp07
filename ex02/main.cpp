#include "Array.hpp"
#include <iostream>

int main() {
	try {
		Array<int> arr1;
		std::cout << "arr1 size: " << arr1.size() << std::endl;

		Array<int> arr2(5);
		for (unsigned int i = 0; i < arr2.size(); ++i) {
		    std::cout << arr2[i] << " "; // 기본값 0 출력
		}
		std::cout << std::endl;

		Array<int> arr3 = arr2;
		arr3[0] = 42; // arr3만 변경
		for (unsigned int i = 0; i < arr3.size(); ++i) {
			std::cout << arr3[i] << " ";
		}
		std::cout << std::endl;

		Array<int> arr4(11);
		arr4 = arr2;
		arr4[1] = 42;
		for (unsigned int i = 0; i < arr3.size(); ++i) {
			std::cout << arr4[i] << " ";
		}
		std::cout << std::endl;

		std::cout << arr4[10] << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}