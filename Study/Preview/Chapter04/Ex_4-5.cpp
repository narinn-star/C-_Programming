#include <iostream>
using namespace std;

int main() {
	int* p;
	
	p = new int; // int타입 1개 할당
	if (!p) {
		cout << "메모리를 할당할 수 없음!";
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}
