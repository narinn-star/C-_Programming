#include <iostream>
#include <string>
using namespace std;

int main() {
	char pwd[20], check[20];
	
	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	cin.getline(pwd, 20);

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	cin.getline(check, 20);

	if (strcmp(pwd, check) == 0)
		cout << "�����ϴ�.";
	else
		cout << "�ٸ��ϴ�.";
}