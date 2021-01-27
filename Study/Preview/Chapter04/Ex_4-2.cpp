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
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
};

int main() {
	Circle circleArray[3];

	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	}

	Circle* p;
	p = circleArray;
	for (int j = 0; j < 3; j++) {
		cout << "Circle " << j << "�� ������ " << p->getArea() << endl;
		p++; // �迭�� ���� ����
	}
}