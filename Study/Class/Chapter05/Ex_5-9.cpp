#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(Circle& c) {
		this->radius = c.radius;
		cout << "복사 생성자 실생 radius = " << radius << endl;
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
	Circle src(30);
	Circle dest(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}