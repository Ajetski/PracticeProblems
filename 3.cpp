/*
* Author: Adam Jeniski
* Problem: 3. Print the balance (not the interest) accrued on a deposit d in n years at annual interest rate r.
*/

#include <iostream>

void calculateBalance(double d, double r, long long n);
double exp(double base, long long power);

int main() {
	calculateBalance(100, .05, 5);
}

void calculateBalance(double d, double r, long long n) {
	std::cout << d * exp(1 + r, n) << "\n";
}

double exp(double base, long long power) {
	if (power == 0) {
		return 1;
	}
	else if (power % 2 == 0) {
		return exp(base * base, power / 2);
	}
	else {
		return base * exp(base * base, (power - 1) / 2);
	}
}