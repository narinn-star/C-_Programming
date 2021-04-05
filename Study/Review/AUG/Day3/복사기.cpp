#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(const Circle& c) {
		this->radius = c.radius;
		cout << "복사 생성자 실행 radius = " << radius << endl;
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

	cout << "원본 " << src.getArea() << endl;
	cout << "복사 " << dest.getArea() << endl;
}