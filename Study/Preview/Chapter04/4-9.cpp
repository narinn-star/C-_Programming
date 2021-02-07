#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
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
	string name;
	int radius;
public:
	CircleManager(int size) {
		p = new Circle[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	}
	~CircleManager() {
		delete[]p;
	}
	void searchByName() {
		cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (name.compare(p[i].getName()) == 0){
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			}
				

		}
	}
	void searchByArea() {
		cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
		cin >> radius;
		cout << radius << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (radius < p[i].getArea()) {
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
			}
			cout << endl;
		}
	}
};

int main() {
	int num;
	cout << "���� ���� >> ";
	cin >> num;
	CircleManager circles(num);
	circles.searchByName();
	circles.searchByArea();

}