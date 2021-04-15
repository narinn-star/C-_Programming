#include <iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index];
}

int main() {
	char name[] = "mike";
	cout << name << endl;

	find(name, 0) = 's'; // name[0] = 's'
	cout << name << endl;

	char& ref = find(name, 2); // ref = name[2]
	ref = 't'; // ref = name[2] = 't'
	cout << name << endl;
}