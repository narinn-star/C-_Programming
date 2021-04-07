#include <iostream>
using namespace std;

class MyIntStack {
	int p[10]; //�ִ� 10���� ���� ����
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() {
		tos = 0;
	}
	bool push(int n) { // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
		if (tos < 10) {
			p[tos] = n;
			tos++;
			return true;
		}
		else
			return false;
	}
	bool pop(int& n) { // ���Ͽ� n������. ������ ��������� false, �ƴϸ� true ����
		tos--;
		if (tos > -1) {
			n = p[tos];
			return true;
		}
		else
			return false;
	}
};

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) { //11���� Ǫ���ϸ� ���������� stack full
		if (a.push(i))
			cout << i << " "; // Ǫ�õ� �� ����
		else
			cout << endl << i + 1 << " ��° stack full" << endl;
	}

	int n;
	for (int i = 0; i < 11; i++) { //11���� ���ϸ�, ���������� stack empty
		if (a.pop(n))
			cout << n << " "; // �� �� �� ��� 
		else
			cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}