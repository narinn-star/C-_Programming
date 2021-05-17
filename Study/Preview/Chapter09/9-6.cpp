#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; //���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
	virtual bool pop(int& n) = 0; //���ÿ��� ���� ������ n�� �����ϰ� ������ empty�̸�  false ����
	virtual int size() = 0; //���� ���ÿ� ����� ������ ���� ����
};

class IntStack :public AbstractStack {
	int* stack;
	int top;
	int max;
public:
	IntStack(int n) {
		stack = new int[n];
		max = n;
		top = -1;
	}
	bool push(int n) {
		if (top == max)
			return false;
		else {
			top++;
			stack[top] = n;
			return true;
		}
	}
	bool pop(int& n) {
		if (top < 0)
			return false;
		else {
			n = stack[top];
			top--;
			return true;
		}
	}
	int size() {
		return top + 1;
	}
};

int main() {
	IntStack intstack(10);
	int res;

	intstack.push(10);
	intstack.push(20);
	intstack.push(30);
	cout << "���� ���� ���� : " << intstack.size() << "��" << endl;
	intstack.pop(res);
	cout << "pop : " << res << endl;
	cout << "���� ���� ���� : " << intstack.size() << "��" << endl;
}