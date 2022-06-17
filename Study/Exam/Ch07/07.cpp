#include <iostream>	
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius = " << radius << " ÀÎ ¿ø" << endl;
	}
	/*Circle operator++() {
		radius++;
		return *this;
	}
	Circle operator++(int x) {
		Circle tmp = *this;
		radius++;
		return tmp;
	}*/
	friend Circle operator++(Circle& op) {
		op.radius++;
		return op;
	}
	friend Circle operator++(Circle& op, int x) {
		Circle tmp = op;
		op.radius++;
		return tmp;
	}
};

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}