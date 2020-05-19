#include <iostream>

void calculateBalance(double blance, double r, long long n);
double exp(double base, long long power);

int main() {
	calculateBalance(100, .05, 5);
}

void calculateBalance(double blance, double r, long long n) {
	std::cout << blance * exp(1 + r, n) << "\n";
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