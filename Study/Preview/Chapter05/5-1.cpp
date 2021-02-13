#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius) {
		this->radius = radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getRadius() {
		return radius;
	}
};

void swap(Circle& c, Circle& C) {
	int swap;
	swap = c.getRadius();
	c.setRadius(C.getRadius());
	C.setRadius(swap);
}

int main() {
	Circle c(10), C(100);
	cout << c.getRadius() << " " << C.getRadius() << endl;
	swap(c, C);
	cout << c.getRadius() << " " << C.getRadius() << endl;
}