#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(Circle& c) {// ���� ������ ����
		this->radius = c.radius;
		cout << "���� ������ ���� radius = " << radius << endl;
	}
	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle src(30); // src ��ü�� ���� ������ ȣ��
	Circle dest(src); // dest ��ü�� ���� ������ ȣ��

	cout << "���� ���� : " << src.getArea() << endl;
	cout << "�纻 ���� : " << dest.getArea() << endl;
}