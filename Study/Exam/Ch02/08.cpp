#include <iostream>	
#include <string>
using namespace std;

int main() {
	char names[200], res[200];
	int max = 0;

	for (int i = 0; i < 5; i++) {
		cin.getline(names, 200, ';');
		cout << names << "\n";
		if (max < strlen(names)) {
			max = strlen(names);
			strcpy_s(res, names);
		}
	}
	cout << "\n" << res;
}