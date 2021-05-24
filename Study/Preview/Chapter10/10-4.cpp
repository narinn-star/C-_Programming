#include <iostream>
using namespace std;

/*
�迭���� ���Ҹ� �˻��ϴ� search()�Լ��� ���ø����� �ۼ��϶�.

search()�� ù ��° �Ű� ������ �˻��ϰ��� �ϴ� ���� ���̰�, �� ��° �Ű� ������ �迭�̸�, �� ��° �Ű� ������ �迭�� �����̴�.

search() �Լ��� �˻��� �����ϸ� true��, �ƴϸ� false�� �����Ѵ�.

search()�� ȣ�� ��ʴ� ������ ����.
*/

template <class T>
T search(T find, T x[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] == find)
			return true;
	}
	return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5))
		cout << "100�� �迭 x�� ���ԵǾ� �ִ�."; // �� cout ����
	else
		cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�.";
}