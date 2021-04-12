#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a* a;
}

int main() {
	cout << square(3.0);
	cout << square((float)3); // cout << square(3) => 함수의 모호한 호출로 컴파일 오류.
}