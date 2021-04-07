#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	~Circle() {
		//cout << "¼Ò¸êÀÚ ½ÇÇà radius = " << radius << endl;
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
};

void swap(Circle &a, Circle &b) {
	int temp;
	temp = a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(temp);
}

int main() {
	Circle circle1(5), circle2(10);
	cout << circle1.getRadius() << " " << circle2.getRadius() << endl;

	swap(circle1, circle2);
	cout << circle1.getRadius() << " " << circle2.getRadius() << endl;

}