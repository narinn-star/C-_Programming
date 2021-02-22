#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		//s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
		int* total = new int[size];
		for (int i = 0; i < size / 2; i++) {
			total[i] = s1[i];
		}
		for (int i = size / 2, j = 0; i < size; i++, j++) {
			total[i] = s2[j];
		}
		return total;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		//s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����.
		//�����ϴ� �迭�� ũ��� retSize�� ����.
		//retSize�� 0�� ��� NULL ����
		int* rmtotal = new int [size / 2];
		int cnt;
		for (int i = 0; i < size / 2; i++) {
			cnt = 0;
			for (int j = 0; j < size / 2; j++) {
				if (s1[i] == s2[j]) {
					cnt++;
				}
			}
			if (cnt == 0) {
				rmtotal[i] = s1[i];
				retSize++;
			}
		}
		if (retSize == 0)
			return NULL;
		return rmtotal;
	}
};

int main() {
	int x[5], y[5];
	int size, retSize = 0;
	int* p;
	cout << "���� 5���� �Է�. �迭 x�� ���� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}

	cout << endl << "���� 5���� �Է�. �迭 y�� ���� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	cout << endl << "��ģ ���� �迭�� ���" << endl;

	size = (sizeof(x) + sizeof(y)) / sizeof(int);
	p = ArrayUtility2::concat(x, y, size);
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ ";

	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << retSize << endl;
	for (int i = 0; i < retSize; i++) {
		cout << p[i] << ' ';
	}
}
//�����