#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		this->price = price;
		int size = strlen(title) + 1;
		this->title = new char[size];
		strcpy(this->title, title);
	}
	Book(const Book& b) {
		this->price = b.price;
		int size = strlen(b.title) + 1;
		this->title = new char[size];
		strcpy(this->title, b.title);
	}
	~Book() {
		delete[] title;
	}
	void set(const char* title, int price) {
		if (this->title)
			delete[] this->title;
		this->price = price;
		int size = strlen(title) + 1;
		this->title = new char[size];
		strcpy(this->title, title);
	}
	void show() {
		cout << title << ' ' << price << "��" << endl;
	}
};

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}