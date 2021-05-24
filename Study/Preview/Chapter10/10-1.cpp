#include <iostream>
using namespace std;

/*
배열을 받아 가장 큰 값을 리턴하는 제네릭 함수 biggest()를 작성하라.

또한 main() 함수를 작성하여 biggest()를 호출하는 몇 가지 사례를 보여라.
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
	cout << biggest(x, 5) << endl; // 5는 배열 x의 크기. 100이 출력된다.
}
