#include <iostream>
using namespace std;

int main() {
	cout << "�̸��� ?";
	char name[20];
	cin.getline(name, 20);
	cout << "�ּҴ� ?";
	char address[100];
	cin.getline(address, 100);
	cout << "���̴� ?";
	int age;
	cin >> age;

	cout << name << ", " << address << ", " << age << "��" << endl;


}