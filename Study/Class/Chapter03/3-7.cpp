#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectRandom {
	int num;
public:
	SelectRandom(int _num) {
		num = _num;
		srand((unsigned)time(0));
	}
	int next() {
		int ran = rand();
		if (num % 2 == 0) { // Â¦¼ö return 
			if (ran % 2 == 0)
				return ran;
			else
				return --ran;
		}
		else {
			if (ran % 2 == 0) // È¦¼ö return 
				return ++ran;
			else
				return ran;
		};
	}
	int nextIntRange(int a, int b) {
		int ran = rand() % (b - a + 1) + a;
		if (num % 2 == 0) { // Â¦¼ö return
			if (ran % 2 == 0)
				return ran;
			else
				return ++ran;
		}
		else { // È¦¼ö return 
			if (ran % 2 == 0)
				return ++ran;
			else
				return ran;
		}
	}
};

int main() {
	SelectRandom r1(0);
	cout << "-- 0¿¡¼­ " << RAND_MAX << "±îÁöÀÇ Â¦¼ö Á¤¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.next();
		cout << n << ' ';
	}
	SelectRandom r2(1);
	cout << endl << endl << "-- 2¿¡¼­ 9±îÁöÀÇ È¦¼ö Á¤¼ö 10°³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r2.nextIntRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}