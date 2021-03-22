#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() {
		radius = 1;
		cout << "반지름 " << radius << "원 생성" << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "반지름 " << radius << "원 생성" << endl;
	}
	~Circle() {
		cout << "반지름 " << radius << "원 소멸" << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	Circle pizza(30);
	//생성은 1-2-3-4
	//소멸은 4-3-2-1
}