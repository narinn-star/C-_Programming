#include <iostream>
using namespace std;

int main() {
	cout << "두 수를 입력하라. >> ";
	int a, b, max = 0;
	cin >> a;
	cin >> b;

	if (a > b)
		max = a;
	else
		max = b;

	cout << "큰 수 = " << max << endl;
	

}