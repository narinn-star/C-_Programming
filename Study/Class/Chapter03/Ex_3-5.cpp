#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() {
		radius = 1;
		cout << "������ " << radius << "�� ����" << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "������ " << radius << "�� ����" << endl;
	}
	~Circle() {
		cout << "������ " << radius << "�� �Ҹ�" << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	Circle pizza(30);
	//������ 1-2-3-4
	//�Ҹ��� 4-3-2-1
}