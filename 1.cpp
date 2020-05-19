#include <iostream>

void sum(double, double);

int main() {
	//run tests
	sum(-1, 10);
	sum(5, -2);
	sum(1.2 , -1.4);
	sum(0, 10.756);
	sum(-1242, 0);

}

void sum(double a, double b) {
	std::cout <<  a << " + " << b << " = " << a + b << "\n";
}