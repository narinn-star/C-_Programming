#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
protected:
	void move(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint() {
		color = "BLACK";
	}
	ColorPoint(int x, int y) : Point(x, y) {
		
	}
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << color << "������ (" << getX() << ", " << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}
};

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}