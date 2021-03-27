#include <iostream>
using namespace std;

class Account {
	int id, balance;
	string name;
public:
	Account(string n, int i, int b) {
		name = n;
		id = i;
		balance = b;
	}
	int inquiry() {
		return balance;
	}
	int deposit(int m) {
		balance += m;
		return balance;
	}
	int withdraw(int m) {
		balance -= m;
		return balance;
	}
	string getOwner() {
		return name;
	}
};

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}