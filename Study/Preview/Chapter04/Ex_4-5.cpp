#include <iostream>
using namespace std;

int main() {
	int* p;
	
	p = new int; // intŸ�� 1�� �Ҵ�
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� ����!";
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}
