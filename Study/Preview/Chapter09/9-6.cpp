#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; //스택에 n을 푸시한다. 스택이 full이면 false 리턴
	virtual bool pop(int& n) = 0; //스택에서 팝한 정수를 n에 저장하고 스택이 empty이면  false 리턴
	virtual int size() = 0; //현재 스택에 저장된 정수의 개수 리턴
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
	cout << "현재 원소 개수 : " << intstack.size() << "개" << endl;
	intstack.pop(res);
	cout << "pop : " << res << endl;
	cout << "현재 원소 개수 : " << intstack.size() << "개" << endl;
}