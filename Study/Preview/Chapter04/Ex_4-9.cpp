#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	~Circle() {
		cout << "소멸자 실행 radius = " << radius << endl;
	}
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
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
	
	Circle* p = pArray; // 포인터 p에 배열의 주소값 설정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++; // 다음 원소의 주소로 증가
	}
	
	delete[]pArray; // 객체 배열 반환
}