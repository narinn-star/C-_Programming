#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int* p=0;
	p = &a;
	cout << p << endl;
	cout << &a << endl;
	cout << *p << endl;
	cout << a << endl;
	cout << &p << endl;
}