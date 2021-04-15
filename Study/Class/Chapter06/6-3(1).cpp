#include <iostream>
using namespace std;

int big(int n1, int n2) {
	int big = 0;
	if (n1 > n2) big = n1;
	else big = n2;

	if (big < 100) return big;
	else return 100;
}

int big(int n1, int n2, int max) {
	int big = 0;
	if (n1 > n2) big = n1;
	else big = n2;

	if (big < max) return big;
	else return max;
}

int main() {
	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로 5 리턴
	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보타 크므로 100 리턴
	int z = big(30, 60, 50); // 30과 60중 큰 값 60이 최대값 50보다 크므로, 50리턴
	cout << x << ' ' << y << ' ' << z << endl;
}