#include <iostream>
using namespace std;

double half(double &a) {
	a = a / 2;
	return a;
}

int main() {
	double n = 20;
	half(n); //n�� �ݰ��� ���� n�� �ٲ۴�.
	cout << n; //10 ���
}