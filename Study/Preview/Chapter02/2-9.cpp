#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�̸���? ";
	string name;
	getline(cin, name);

	cout << "�ּҴ�? ";
	char address[100];
	cin.getline(address, 100, '\n');

	cout << "���̴�? ";
	int age;
	cin >> age;

	cout << name << ", " << address << ", " << age << "��\n";
}