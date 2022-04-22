#include <iostream>	
using namespace std;

int main() {
	std::cout << "My name is Mike\n";

	cout << "컴퓨터공학과\n" << "21세\n" << "대통령\n";

	int sum = 0;
	for (int i = 0; i < 11; i++) {
		sum += i;
	}
	cout << "1에서 10까지 더한 결과는 " << sum << "입니다.\n";

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}