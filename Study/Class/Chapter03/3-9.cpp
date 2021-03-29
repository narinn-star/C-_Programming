#include <iostream>
using namespace std;

class Oval {
	int width, height;
public:
	Oval() {
		width = 1;
		height = 1;
	}
	Oval(int w, int h) {
		width = w;
		height = h;
	}
	~Oval() {
		cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
	}
	void set(int w, int h) {
		width = w;
		height = h;
	}
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}