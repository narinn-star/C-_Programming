#include <iostream>
using namespace std;

class Circle { //class Circle �����
public:
	int radius;
	double getArea();
};

double Circle::getArea() { //class Circle ������
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //��ü donut ����
	donut.radius = 1; //��ü donut�� ������� [��ü�̸�.���] (��ü donut�� ������ 1)
	double area = donut.getArea(); //��ü donut�� ����Լ� ȣ�� (��ü donut ����)
	cout << "donut ������ " << area << endl;

	Circle pizza; //��ü pizza ����
	pizza.radius = 30; //��ü pizza�� ������� (��ü pizza�� ������ 30)
	area = pizza.getArea(); // ��ü pizza�� ����Լ� ȣ�� (��ü pizza ����)
	cout << "pizza ������ " << area << endl;
}