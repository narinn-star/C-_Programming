#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �� �ϳ��� �Է��ϼ���.\n";

	cout << "��� >> ";
	char playerA[10];
	cin.getline(playerA, 10);

	cout << "�ƶ� >> ";
	char playerB[10];
	cin.getline(playerB, 10);

	if (strcmp(playerA,"����") == 0) {
		if (strcmp(playerB, "����") == 0) {
			cout << "�����ϴ�.";
		}
		else if (strcmp(playerB, "����") == 0) {
			cout << "�ƶ��� �̰���ϴ�.";
		}
		else
			cout << "��ǰ� �̰���ϴ�.";
	}
	else if (strcmp(playerA, "����") == 0) {
		if (strcmp(playerB, "����") == 0) {
			cout << "��ǰ� �̰���ϴ�.";
		}
		else if (strcmp(playerB, "����") == 0) {
			cout << "�����ϴ�.";
		}
		else
			cout << "�ƶ��� �̰���ϴ�.";
	}
	else {
		if (strcmp(playerB, "����") == 0) {
			cout << "�ƶ��� �̰���ϴ�.";
		}
		else if (strcmp(playerB, "����") == 0) {
			cout << "��ǰ� �̰���ϴ�.";
		}
		else
			cout << "�����ϴ�.";
	}

}