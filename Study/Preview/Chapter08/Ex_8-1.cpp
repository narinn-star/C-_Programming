#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 2차원 평면에서 컬ㄹ ㅓ점을 표현하는 클래스 ColorPoint. Point를 상속받음.
	string color; // 점의 색 표현
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint() {
		cout << color << ":";
		showPoint();
	}
};

int main() {
	Point p; //기본 클래스의 객체 생성
	ColorPoint cp; //파생 클래스의 객체 생성
	cp.set(3, 4); //기본 클래스 멤버 호출
	cp.setColor("Red"); //파생 클래스 멤버 호출
	cp.showColorPoint(); //파생 클래스 멤버 호출
}