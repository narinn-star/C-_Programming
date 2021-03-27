#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(string b) {
		year = stoi(b.substr(0, 4));
		month = stoi(b.substr(5, 1));
		day = stoi(b.substr(7, 2));
	}
	void show() {
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};

int main() {
	Date birth(2000, 5, 16);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;
}