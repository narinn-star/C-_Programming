#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	cout << "���� ���� >> ";
	int cnum;
	cin >> cnum;

	Circle* circle = new Circle[cnum];
	int radius, count = 0;

	for (int i = 0; i < cnum; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}