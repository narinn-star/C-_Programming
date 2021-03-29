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
		if (num % 2 == 0) { // ¦�� return 
			if (ran % 2 == 0)
				return ran;
			else
				return --ran;
		}
		else {
			if (ran % 2 == 0) // Ȧ�� return 
				return ++ran;
			else
				return ran;
		};
	}
	int nextIntRange(int a, int b) {
		int ran = rand() % (b - a + 1) + a;
		if (num % 2 == 0) { // ¦�� return
			if (ran % 2 == 0)
				return ran;
			else
				return ++ran;
		}
		else { // Ȧ�� return 
			if (ran % 2 == 0)
				return ++ran;
			else
				return ran;
		}
	}
};

int main() {
	SelectRandom r1(0);
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.next();
		cout << n << ' ';
	}
	SelectRandom r2(1);
	cout << endl << endl << "-- 2���� 9������ Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r2.nextIntRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}