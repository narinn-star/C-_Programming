#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut의 면적 : " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적 : " << area << endl;
}