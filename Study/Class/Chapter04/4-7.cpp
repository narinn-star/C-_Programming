#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle circles[3];
	int r, count = 0;

	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "������ >> ";
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";

	
}