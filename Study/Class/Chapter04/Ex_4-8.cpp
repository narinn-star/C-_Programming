#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "생성자 실행 radius : " << radius << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "생성자 실행 radius : " << radius << endl;
	}
	~Circle() {
		cout << "소멸자 실행 radius : " << radius << endl;
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
		cout << "정수 반지름 입력(음수면 종료) >> ";
		cin >> radius;
		if (radius < 0)
			return 0;
		Circle* p = new Circle(radius);
		cout << "원의 면적 : " << p->getArea() << endl;
		delete p;
	}
}