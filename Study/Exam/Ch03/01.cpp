#include <iostream>
using namespace std;

class Tower {
public:
	int height;
	Tower() {
		height = 1;
	}
	Tower(int h) {
		height = h;
	}
	int getHeight() {
		return height;
	}
};
int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�	" << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}