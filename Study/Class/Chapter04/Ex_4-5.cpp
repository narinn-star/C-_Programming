#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; //int 타입 1개 할당
	if (!p) {
		cout << "메모리 할당 불가";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;
	cout << "p = " << p << endl;

	delete p;
}