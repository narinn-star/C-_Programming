#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() {
		radius = 1;
		cout << "������ " << radius << " �� ����" << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "������ " << radius << " �� ����" << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut�� ���� : " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza�� ���� : " << area << endl;
}