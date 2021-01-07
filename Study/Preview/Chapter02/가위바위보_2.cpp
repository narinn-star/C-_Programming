#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Game : 가위 바위 보\n";
	cout << "A >> ";
	string A;
	cin >> A;

	cout << "B >> ";
	string B;
	cin >> B;

	if (A == B)
		cout << "DRAW";
	else {
		if (A == "가위") {
			if (B == "바위")
				cout << "B IS THE WINEER";
			else
				cout << "A IS THE WINNER";
		}
		else if (A == "바위") {
			if (B == "가위")
				cout << "A IS THE WINNER";
			else
				cout << "B IS THE WINNER";
		}
		else {
			if (B == "가위")
				cout << "B IS THE WINNER";
			else
				cout << "A IS THE WINNER";
		}
	}
}