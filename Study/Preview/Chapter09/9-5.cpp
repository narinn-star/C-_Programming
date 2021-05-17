#include <iostream>
using namespace std;

class AbstractGate { //�߻�Ŭ����
protected:
	bool x, y;
public:
	void set(bool x, bool y) {
		this->x = x;
		this->y = y;
	}
	virtual bool operation() = 0;
};

class ANDGate : public AbstractGate {
public:
	bool operation() {
		if (x == true && y == true)
			return true;
		else
			return false;
	}
};

class ORGate :public AbstractGate {
public:
	bool operation() {
		if (x == true || y == true)
			return true;
		else
			return false;
	}
};

class XORGate :public AbstractGate {
public:
	bool operation() {
		if (x != y)
			return true;
		else
			return false;
	}
};

int main() {
	ANDGate andG;
	ORGate orG;
	XORGate xorG;

	andG.set(true, false);
	orG.set(true, false);
	xorG.set(true, false);
	cout.setf(ios::boolalpha); //�Ҹ� ���� "true", "false" ���ڿ��� ����� ���� ����
	cout << andG.operation() << endl; //result : false
	cout << orG.operation() << endl; //result : true
	cout << xorG.operation() << endl; //result : true
}