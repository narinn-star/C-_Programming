#include <iostream>	
#include <string>
using namespace std;

class Date {
public:
	int year, month, day;
	Date() {};
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(string date) {
		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 6));
		day = stoi(date.substr(7, 9));
	}
	void show() {
		cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;
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
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}