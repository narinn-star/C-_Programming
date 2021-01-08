#include <iostream>
using namespace std;

int main() {
	cout << "두 수를 입력하라 >>";

	int A, B, MAX = 0;
	cin >> A;
	cin >> B;

	if (A <= B)
		MAX = B;
	else if (A >= B)
		MAX = A;

	cout << "큰 수 = " << MAX << "\n";
}