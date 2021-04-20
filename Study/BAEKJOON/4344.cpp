#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int c, stu = 0, count = 0, avg = 0;
	cin >> c;
	int score[1000] = { 0 };
	for (int i = 0; i < c; i++) {
		cin >> stu;
		count = 0; avg = 0;
		for (int j = 0; j < stu; j++) {
			cin >> score[j];
			avg += score[j];
		}
		avg = avg / stu;
		for (int j = 0; j < stu; j++) {
			if (score[j] > avg)
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (float)count / stu * 100 << "%\n";
	}
	return 0;
}