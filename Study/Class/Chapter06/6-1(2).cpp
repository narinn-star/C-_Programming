#include <iostream>
using namespace std;

int add(int a[], int size, int c[] = NULL) {
	int s = 0;
	for (int i = 0; i < size; i++) {
		s += a[i];
		if (c != NULL)
			s += c[i];
	}
	return s;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}