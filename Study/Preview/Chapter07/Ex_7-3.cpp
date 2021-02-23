#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend RectManager; // RectManager 클래스의 모든 함수를 프렌드 함수로 선언
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	//복사 전
	if (man.equals(a, b))
		cout << "복사 전 : equal" << endl;
	else
		cout << "복사 전 : not equal" << endl;

	man.copy(b, a); //복사

	//복사 후
	if (man.equals(a, b))
		cout << "복사 후 : equal" << endl;
	else
		cout << "복사 후 : not equal" << endl;
}