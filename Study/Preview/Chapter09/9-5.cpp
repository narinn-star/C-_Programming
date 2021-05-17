#include <iostream>
using namespace std;

class AbstractGate { //추상클래스
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
	cout.setf(ios::boolalpha); //불린 값을 "true", "false" 문자열로 출력할 것을 지시
	cout << andG.operation() << endl; //result : false
	cout << orG.operation() << endl; //result : true
	cout << xorG.operation() << endl; //result : true
}