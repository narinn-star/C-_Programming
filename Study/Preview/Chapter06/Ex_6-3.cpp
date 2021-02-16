#include <iostream>
#include <string>
using namespace std;

void star(int a = 5) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text = "") {
	cout << id << ' ' << text << endl;
}

int main() {
	star(); //a = 5
	star(10); //a = 10

	msg(10); //id = 10, text = ""
	msg(10, "Hello"); //id = 10, text = "Hello"
}