#include <iostream>
#include <string>
using namespace std;

 int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력해주세요.\n>> ";
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
	cout << "가장 긴 이름은 " << result;
}