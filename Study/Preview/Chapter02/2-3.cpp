#include <iostream>
using namespace std;

int main() {
	cout << "�� ���� �Է��϶� >>";

	int A, B, MAX = 0;
	cin >> A;
	cin >> B;

	if (A <= B)
		MAX = B;
	else if (A >= B)
		MAX = A;

	cout << "ū �� = " << MAX << "\n";
}