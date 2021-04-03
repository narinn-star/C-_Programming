#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {

	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	int n;
	int r, count = 0;
	cout << "���� ���� >> ";
	cin >> n;
	Circle *circles = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "������ >> ";
		cin >> r;
		(circles + i)->setRadius(r);

		if ((circles + i)->getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";


}