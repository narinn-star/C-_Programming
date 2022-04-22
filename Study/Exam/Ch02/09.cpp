#include <iostream>	
#include <string>
#include <cstring>
using namespace std;

int main() {
	string name, address;
	int age;

	cout << "이름 입력";
	cin >> name;
	cout << "주소 입력";
	getline(cin, address);

	cout << "나이 입력";
	cin >> age;

	cout << "이름 : " << name << "\n주소 : " << address << "\n나이 : " << age;
}