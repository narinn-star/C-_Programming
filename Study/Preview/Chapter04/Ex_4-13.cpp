#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�. (�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n');
	int length = s.length();

	for (int i = 0; i < length; i++) {
		string first = s.substr(0, 1); // �� ���� ���� 1���� ���ڿ��� �и�
		string sub = s.substr(1, length - 1); // ������ ���ڵ��� ���ڿ��� �и�
		s = sub + first; // �� ���ڿ� ����
		cout << s << endl;
	}
}