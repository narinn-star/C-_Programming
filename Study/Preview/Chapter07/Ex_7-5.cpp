#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show() {
		cout << "kick = " << kick << ", punch = " << punch << endl;
	}
	bool operator== (Power op2) {
			if (kick == op2.kick && punch == op2.punch)
				return true;
			else
				return false;
	}
};

int main() {
	Power a(3, 5), b(3, 5);
	a.show();
	b.show();
	if(a == b)
		cout << "일치" << endl;
	else
		cout << "불일치" << endl;
}