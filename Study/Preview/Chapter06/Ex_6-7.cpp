#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0) << endl;
	cout << square((float)3); // square(3) => 모호한 호출로, 컴파일 오류 ! 
}