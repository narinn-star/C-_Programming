#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;

	getline(cin, s, '\n');

	int sum = 0;
	int startIndex = 0;
	int fIndex;
	while (true) {
		fIndex = s.find('+', startIndex); 
		
		if (fIndex == -1) { // '+' ���� �߰� X
			string part = s.substr(startIndex);
			if (part == "") break; // "2+3+", �� +�� ������ ���
			cout << part << endl;
			sum += stoi(part);
			break; // +�� ������ ���̻� ���� �� �ʿ� X
		}
		
		int count = fIndex - startIndex; // �ڸ� ���� ����
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part); // s => int������ �ٲٱ�
		startIndex = fIndex + 1; // �˻��� �ε��� �÷��� ��Ű��
	}
	cout << "���ڵ��� ���� " << sum;
}
// ����ȥ���̰ɾ���ؤ���������������������������������������