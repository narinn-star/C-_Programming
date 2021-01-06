#include <iostream>
using namespace std;

int main() {
	cout << "주소를 입력하세요 >> ";

	char address[100];
	cin.getline(address, 100); // == cin.getline(address, 100, '\n'); 마지막 매개 변수 달라도 됨!

	cout << "주소는 " << address << "입니다\n";
}