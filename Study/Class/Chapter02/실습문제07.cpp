#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		cout << "�����ϰ������ yes�� �Է��ϼ��� >> ";
		char yes[20];
		cin.getline(yes, 20, '\n');
		if (strcmp(yes, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
}