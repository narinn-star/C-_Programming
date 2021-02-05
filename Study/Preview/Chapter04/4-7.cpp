#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {

	}
	string getName() {

	}
	string getTel() {

	}
	void set(string name, string tel) {

	}
};

int main() {
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i << ">> ";

	}
}