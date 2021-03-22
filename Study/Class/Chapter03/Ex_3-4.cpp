#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	Rectangle() {
		width = 1;
		height = 1;
	}
	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	Rectangle(int length) {
		length = width = height;
	}
	bool isSquare() {
		if (width == height)
			return true;
		else
			return false;
	}
};

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())
		cout << "rect1 정사각형" << endl;
	if (rect2.isSquare())
		cout << "rect2 정사각형" << endl;
	if (rect3.isSquare())
		cout << "rect3 정사각형" << endl;
}