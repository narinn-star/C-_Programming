#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() {
		radius = 1;
		cout << "반지름 " << radius << " 원 생성" << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "반지름 " << radius << " 원 생성" << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut의 면적 : " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza의 면적 : " << area << endl;
}