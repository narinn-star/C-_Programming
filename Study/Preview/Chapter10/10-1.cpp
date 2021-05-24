#include <iostream>
using namespace std;

/*
�迭�� �޾� ���� ū ���� �����ϴ� ���׸� �Լ� biggest()�� �ۼ��϶�.

���� main() �Լ��� �ۼ��Ͽ� biggest()�� ȣ���ϴ� �� ���� ��ʸ� ������.
*/

template <class T>
T biggest(T x, int n) {
	int big = -1;
	for (int i = 0; i < n; i++) {
		if (x[i] > big)
			big = x[i];
	}
	return big;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl; // 5�� �迭 x�� ũ��. 100�� ��µȴ�.
}
