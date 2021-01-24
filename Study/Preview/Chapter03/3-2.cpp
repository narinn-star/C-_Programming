#include <iostream>
#include <string>
using namespace std;

class Date {
	int day, month, year;
	string IPD;
public:
	Date(int y, int m, int d) {
		year = y; month = m; day = d;
	};
	Date(string IPD) {
		year = stoi(IPD.substr(0, 4));
		month = stoi(IPD.substr(5, 1));
		day = stoi(IPD.substr(7, 2));
	};
	void show() {
		cout << year << "�� " << month << "�� " << day << "��" << endl;
	};
	int getYear() { return year; };
	int getMonth() { return month; };
	int getDay() { return day; };
};

int main() {
	Date birth(2000, 5, 16); // 2000�� 5�� 16��
	Date independenceDay("1945/8/15"); //1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
