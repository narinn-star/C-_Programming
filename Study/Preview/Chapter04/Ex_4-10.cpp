#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	~Circle() {
		
	}
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	cout << "생성하고자 하는 원의 개수? ";
	int num, radius;
	cin >> num;
	if (num <= 0)
		return 0;
	Circle* pArray = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "원" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius); // 각 Circle 객체를 반지름으로 초기화
	}
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < num; i++) {
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "면적이 100에서 200사이인 원의 개수는 " << count << endl;
	
	delete[]pArray;
}