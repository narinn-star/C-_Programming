#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle circleArray[2][3];

	circleArray[0][0].setRadius(1);
	circleArray[0][1].setRadius(2);
	circleArray[0][2].setRadius(3);
	circleArray[1][0].setRadius(4);
	circleArray[1][1].setRadius(5);
	circleArray[1][2].setRadius(6);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << "," << j << "]�� ������ " << circleArray[i][j].getArea() << endl;
		}
	}
}