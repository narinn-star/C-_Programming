#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name) {
		this->id = id;
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}
	Person(Person& person) {
		this->id = person.id;
		int len = strlen(person.name);
		this->name = new char[len + 1];
		strcpy(this->name, person.name);
		cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
		cout << "�纻 ��ü�� �̸� " << person.name << endl;

	}
	~Person() {
		delete[] name;
	}
	void changeName(const char* name) {
		if (strlen(name) > strlen(this->name))
			return;
		strcpy(this->name, name);
	}
	void show() {
		cout << id << ", " << name << endl;
	}
};

void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "Kitae");
	Person son = father;
	f(father);
	g();
}