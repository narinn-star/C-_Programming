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
	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ� 5 ����
	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100��Ÿ ũ�Ƿ� 100 ����
	int z = big(30, 60, 50); // 30�� 60�� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50����
	cout << x << ' ' << y << ' ' << z << endl;
}