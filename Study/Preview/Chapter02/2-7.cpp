#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		cout << "�����ϰ������ yes�� �Է��ϼ��� >> ";
		char yes[10];
		cin.getline(yes, 10);
		if (strcmp(yes, "yes") == 0) {
			cout << "�����մϴ�...";
			break;
		}
	}
}