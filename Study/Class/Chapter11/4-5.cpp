#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	Circle() {
		radius = 1;
	}
	void setRadius(int radius);//������ ����
	double getArea(); //���� ����
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle c[3];

	int radius, count = 0;

	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		c[i].setRadius(radius);

		if (c[i].getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";
}