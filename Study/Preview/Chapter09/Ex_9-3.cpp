#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Derived::f() called" << endl;
	}
};

class GrandDerived : public Derived {
public:
	void f() {
		cout << "GrandDerived::f() called" << endl;
	}
};

int main() {
	GrandDerived g;
	Base* bp;
	Derived* dp;
	GrandDerived* gp;
	bp = dp = gp = &g;

	bp->f();
	dp->f();
	gp->f();
	//세개 모두 객체 g를 가리킴. 동적 바인딩에 의해 GrandDerived의 함수 f() 호출
}