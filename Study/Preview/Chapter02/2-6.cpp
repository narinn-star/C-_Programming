#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	string pw;
	getline(cin, pw);

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	string repw;
	getline(cin, repw);

	if (pw == repw)
		cout << "�����ϴ�.";
	else
		cout << "���� �ʽ��ϴ�.";
}