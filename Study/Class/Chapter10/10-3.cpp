#include <iostream>
using namespace std;

template <class T>
T reverseArray(T x[], int n) {
	int j = n - 1;
	for (int i = 0; i < j; i++, j--) {
		T tmp = x[j];
		x[j] = x[i];
		x[i] = tmp;
	}
	return 0;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << " ";
	}
}