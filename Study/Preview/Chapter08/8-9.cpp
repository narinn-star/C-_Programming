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
			cout << "���� : 1, ��� : 2, ���� : 3, ������ : 4 >> ";
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
				cout << "�ٽ� �Է����ּ���" << endl;
				break;
			}
		}
	}
};


int main() {
	AirlineBook* air = new AirlineBook();

	cout << "*** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. ***" << endl;
	cout << endl;
	
}