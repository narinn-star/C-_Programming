#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	~Circle() {
		cout << "소멸자 실행 : 반지름 " << radius << "인 원 소멸" << endl;
	}
};

int main() {
	cout << "원의 개수 >> ";
	int cnum;
	cin >> cnum;

	Circle* circle = new Circle[cnum];

	
	int radius, count = 0;

	

	for (int i = 0; i < cnum; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > 100) {
			count++;
		}
		
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

	for (int i = 0; i < cnum; i++) {
		(circle + i)->~Circle();
	}
}