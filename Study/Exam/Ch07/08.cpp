#include <iostream>	
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius = " << radius << " �� ��" << endl;
	}
	friend Circle operator+ (int a, Circle op1) {
		op1.radius += a;
		return op1;
	}	
};

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}