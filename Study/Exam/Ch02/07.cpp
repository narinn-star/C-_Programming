#include <iostream>	
#include <string>
#include <cstring>
using namespace std;

int main() {
	char input[100];

	while (1) {
		cin.getline(input, 100, '\n');
		if (strcmp(input, "yes") == 0)
			return 0;
	}
}