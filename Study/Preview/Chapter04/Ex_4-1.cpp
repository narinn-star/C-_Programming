#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	Circle pizza(30);
	
	//객체 이름으로 접근
	cout << "donut.getArea() : " << donut.getArea() << endl;

	//객체 포인터로 접근
	Circle* p;
	p = &donut;
	cout << "p->getArea() : " << p->getArea() << endl;
	cout << "(*p).getArea(): " << (*p).getArea() << endl;

	p = &pizza;
	cout << "p->getArea() : " << p->getArea() << endl;
	cout << "(*p).getArea() : " << (*p).getArea() << endl;
}