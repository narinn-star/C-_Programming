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
	Circle* pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}

	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << (p+i)->getArea() << endl;
	}

	delete[] pArray;
}