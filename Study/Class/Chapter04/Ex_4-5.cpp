#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; //int Ÿ�� 1�� �Ҵ�
	if (!p) {
		cout << "�޸� �Ҵ� �Ұ�";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;
	cout << "p = " << p << endl;

	delete p;
}