#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 101; i++) {
		if (i % 10 == 1) {
			cout << "\n";
		}
		cout << i << "\t";
	}
}