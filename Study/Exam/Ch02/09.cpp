#include <iostream>	
#include <string>
#include <cstring>
using namespace std;

int main() {
	string name, address;
	int age;

	cout << "�̸� �Է�";
	cin >> name;
	cout << "�ּ� �Է�";
	getline(cin, address);

	cout << "���� �Է�";
	cin >> age;

	cout << "�̸� : " << name << "\n�ּ� : " << address << "\n���� : " << age;
}