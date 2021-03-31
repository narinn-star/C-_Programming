#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "������ ���� radius : " << radius << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "������ ���� radius : " << radius << endl;
	}
	~Circle() {
		cout << "�Ҹ��� ���� radius : " << radius << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	void setRadius(int r) {
		radius = r;
	}
};

int main() {
	int radius;
	while (1) {
		cout << "���� ������ �Է�(������ ����) >> ";
		cin >> radius;
		if (radius < 0)
			return 0;
		Circle* p = new Circle(radius);
		cout << "���� ���� : " << p->getArea() << endl;
		delete p;
	}
}