#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}

	double getArea() {
		return 3.14 * radius * radius;
	}
	void setRadius(int r) {
		radius = r;
	}
};

int main() {
	cout << "�����ϰ��� �ϴ� ���� ���� : ";
	int n, radius;
	cin >> n;
	if (n <= 0)
		return 0;

	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << " : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << (p + i)->getArea() << ' ';
		if ((p + i)->getArea() >= 100 && (p + i)->getArea() <= 200)
			count++;
	}
	
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count;
	delete[]pArray;
}