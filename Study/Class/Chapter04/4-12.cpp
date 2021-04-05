#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	string getName() {
		return name;
	}
};

class CircleManager {
	Circle* p;
	int size;
	int radius;
	string name;
public:
	CircleManager(int size) {
		this->size = size;
		p = new Circle[size];
		for (int i = 0; i < size; i++) {
			cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	}
	~CircleManager() {
		delete[] p;
	}
	void searchByName() {
		cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
		cin >> name;

		for (int i = 0; i < size; i++) {
			if (name == p[i].getName())
				cout << name << "�� ������ " << p[i].getArea() << endl;
		}
	}
	void searchByArea() {
		int area;
		cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
		cin >> area;
		cout << area << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (area < p[i].getArea())
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
};

int main() {
	int num;
	cout << "���� ���� >> ";
	cin >> num;
	CircleManager circle(num);
	circle.searchByName();
	circle.searchByArea();
}