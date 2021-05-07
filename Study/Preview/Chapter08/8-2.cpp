#include <iostream>
#include <string>
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

class NameCircle : public Circle {
	string name;
public:
	void set(int radius, string name) {
		setRadius(radius);
		this->name = name;
	}
	string getName() {
		return name;
	}
};

int main() {
	NameCircle pizza[5];
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	int radius, big = 0, idx;
	string name;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		cin >> radius >> name;
		pizza[i].set(radius, name);
	}
	for (int i = 0; i < 5; i++) {
		if (pizza[i].getArea() > big) {
			big = pizza[i].getArea();
			idx = i;
		}
			
	}
	cout << "���� ������ ū ���ڴ� " << pizza[idx].getName() << "�Դϴ�.";
}