#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int radius) {
		this->radius = radius;
		cout << "������ ���� radius = " << radius << endl;
	}
	~Circle() {
		cout << "�Ҹ��� ���� radius = " << radius << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	int getReadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
};

void increase(Circle& c) {
	int r = c.getReadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getReadius() << endl;
}