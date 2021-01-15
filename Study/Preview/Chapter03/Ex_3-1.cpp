#include <iostream>
using namespace std;

class Circle { //class Circle 선언부
public:
	int radius;
	double getArea();
};

double Circle::getArea() { //class Circle 구현부
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //객체 donut 생성
	donut.radius = 1; //객체 donut의 멤버변수 [객체이름.멤버] (객체 donut의 반지름 1)
	double area = donut.getArea(); //객체 donut의 멤버함수 호출 (객체 donut 면적)
	cout << "donut 면적은 " << area << endl;

	Circle pizza; //객체 pizza 생성
	pizza.radius = 30; //객체 pizza의 멤버변수 (객체 pizza의 반지름 30)
	area = pizza.getArea(); // 객체 pizza의 멤버함수 호출 (객체 pizza 면적)
	cout << "pizza 면적은 " << area << endl;
}