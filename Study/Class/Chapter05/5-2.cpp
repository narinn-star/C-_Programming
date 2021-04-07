#include <iostream>
using namespace std;

double half(double &a) {
	a = a / 2;
	return a;
}

int main() {
	double n = 20;
	half(n); //n의 반값을 구해 n을 바꾼다.
	cout << n; //10 출력
}