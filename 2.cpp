/*
* Author: Adam Jeniski
* Problem: 2. Print the least-significant digit of any non-negative whole number the user supplies.
*/

#include <iostream>

void lsdUnchecked(const unsigned long long&);
void lsdChecked(const long long&);

int main() {
	for (const long long& num : { 0, -2, 100, 21312, 1243253, -352123, 123123, 1 }) {
		//lsdChecked(num);
		lsdUnchecked(num);
	}
}

void lsdUnchecked(const unsigned long long& num) {
	std::cout << "Least significant digit of " << num << " is " << num % 10 << "\n";
}

void lsdChecked(const long long& num) {
	if (num < 0) {
		std::cout << "Error: " << num << " is not a non-negative whole number.\n";
	}
	else {
		std::cout << "Least significant digit of " << num << " is " << num % 10 << "\n";
	}
}