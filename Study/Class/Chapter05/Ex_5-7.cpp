#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
};

void readRadius(Circle &c) {
	int radius;
	cout << "���� ������ �������� �Է� >> ";
	cin >> radius;
	c.setRadius(radius);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;
}