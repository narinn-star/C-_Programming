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
	cout << "�����ϰ��� �ϴ� ���� ����? ";
	int num, radius;
	cin >> num;
	if (num <= 0)
		return 0;
	Circle* pArray = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "��" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius); // �� Circle ��ü�� ���������� �ʱ�ȭ
	}
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < num; i++) {
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "������ 100���� 200������ ���� ������ " << count << endl;
	
	delete[]pArray;
}