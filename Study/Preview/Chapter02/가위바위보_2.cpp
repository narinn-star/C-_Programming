#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Game : ���� ���� ��\n";
	cout << "A >> ";
	string A;
	cin >> A;

	cout << "B >> ";
	string B;
	cin >> B;

	if (A == B)
		cout << "DRAW";
	else {
		if (A == "����") {
			if (B == "����")
				cout << "B IS THE WINEER";
			else
				cout << "A IS THE WINNER";
		}
		else if (A == "����") {
			if (B == "����")
				cout << "A IS THE WINNER";
			else
				cout << "B IS THE WINNER";
		}
		else {
			if (B == "����")
				cout << "B IS THE WINNER";
			else
				cout << "A IS THE WINNER";
		}
	}
}