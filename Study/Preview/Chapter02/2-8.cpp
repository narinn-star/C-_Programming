#include <iostream>
#include <string>
using namespace std;

 int main() {
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է����ּ���.\n>> ";
	char names[100];
	int max = 0;
	string result;

	for (int i = 1; i <= 5; i++) {
		cin.getline(names, 100, ';');
		cout << i << " : " << names << "\n";

		if (max < strlen(names)) {
			max = strlen(names);
			result = names;
		}
	}
	cout << "���� �� �̸��� " << result;
}