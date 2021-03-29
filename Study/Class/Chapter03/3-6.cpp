#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom() {
		srand((unsigned)time(0));
	}
	int next() {
		int a = rand();
		if (a % 2 == 0)
			return a;
		else
			return --a;
	}
	int nextIntRange(int a, int b) {
		int ran = rand() % (b - a + 1) + a;
		if (ran % 2 == 0)
			return ran;
		else
			return ran--;
	}
};

int main() {
	EvenRandom er;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.nextIntRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}