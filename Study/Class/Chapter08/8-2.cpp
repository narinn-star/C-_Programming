#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

class NamedCircle : public Circle {
	string name;
public:
	string getName(){
		return name;
	}
	void set(int radius, string name) {
		setRadius(radius);
		this->name = name;
	}
};

int main() {
	NamedCircle pizza[5];
	int radius, idx, big = 0;
	string name;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		cin >> radius >> name;
		pizza[i].set(radius, name);
	}

	for (int i = 0; i < 5; i++) {
		if (big < pizza[i].getArea()) {
			big = pizza[i].getArea();
			idx = i;
		}
	}
	cout << endl;
	cout << "���� ������ ū ���ڴ� " << pizza[idx].getName() << "�Դϴ�." << endl;
}