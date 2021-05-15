#include <iostream>
using namespace std;

class Seat {
public:

};

class AirlineBook {
public:

	void run() {
		int select;
		while (1) {
			cout << "예약 : 1, 취소 : 2, 보기 : 3, 끝내기 : 4 >> ";
			cin >> select;
			switch (select) {
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default:
				cout << "다시 입력해주세요" << endl;
				break;
			}
		}
	}
};


int main() {
	AirlineBook* air = new AirlineBook();

	cout << "*** 한성항공에 오신것을 환영합니다. ***" << endl;
	cout << endl;
	
}