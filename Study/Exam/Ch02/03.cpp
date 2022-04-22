#include <iostream>	
using namespace std;

int main() {
	cout << "두 정수 입력" << endl;
	int a, b;
	cin >> a >> b;

	if (a < b)
		cout << b;
	else
		cout << a;
}