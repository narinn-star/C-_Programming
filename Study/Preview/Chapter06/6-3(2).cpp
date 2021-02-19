#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	int Big = 0;
	int Def = c;
	if (a > b)
		Big = a;
	else
		Big = b;
	if (Big > Def)
		return Def;
	else
		return Big;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}