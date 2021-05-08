#include <iostream>
#include <string>
using namespace std;

class Print {
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Print(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->availableCount = availableCount;
	}
	bool print(int pages) {
		printedCount = pages;
		if (availableCount < printedCount) {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		else {
			for (int i = 0; i < pages; i++) {
				availableCount--;
			}
			cout << "프린트 하였습니다." << endl;
			return true;
		}
	}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getAvailableCount() { return availableCount; }
};

class InkPrint : public Print {
	int availableInk;
public:
	InkPrint(string model, string manufacturer, int availableCount, int availableInk) :Print(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	bool printInkJet(int pages) {
		if (print(pages));
		else return false;

		if (availableInk < pages) {
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		else {
			for (int i = 0; i < pages; i++) {
				availableInk--;
			}
		}
		return true;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << availableInk << endl;
	}
};

class LaserPrint : public Print {
	int availableToner;
public:
	LaserPrint(string model, string manufacturer, int availableCount, int availableToner) :Print(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	bool printLaser(int pages) {
		if (print(pages));
		else return false;

		if (availableToner < pages) {
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		else {
			for (int i = 0; i < pages; i++) {
				availableToner--;
			}
		}
		return true;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << availableToner << endl;
	}
};

int main() {
	InkPrint* inkP = new InkPrint("Officejet V40", "HP", 5, 10);
	LaserPrint* laserP = new LaserPrint("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	cout << "잉크젯 : ";
	inkP->show();
	cout << "레이저 : ";
	laserP->show();
	cout << endl;

	int count, select;
	string answer;

	while (1) {
		cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력 >> ";
		cin >> select >> count;
		if (select == 1) inkP->printInkJet(count);
		else if (select == 2) laserP->printLaser(count);
		inkP->show();
		laserP->show();
		cout << "계속 프린트 하시겠습니까? (y/n) >> ";
		cin >> answer;
		if (answer == "y") {
			cout << endl;
			continue;
		}
		else if (answer == "n") break;
		else cout << "잘못 입력하셨습니다." << endl;
	}
}