#include <iostream>	
using namespace std;

int main() {
	double num[5];
	double max = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (num[i] > max)
			max = num[i];
	}
	cout << max;
}