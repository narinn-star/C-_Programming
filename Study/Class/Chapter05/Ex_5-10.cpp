#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name) {

	}
	~Person() {

	}
	void changeName(const char* name) {

	}
	void show() {
		cout << id << ', ' << name << endl;
	}
};

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter ��ü ���� ���� ---- " << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ �� ---- " << endl;
	father.show();
	daughter.show();

	return 0;
}