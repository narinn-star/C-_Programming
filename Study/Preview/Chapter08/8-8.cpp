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
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return false;
		}
		else {
			for (int i = 0; i < pages; i++) {
				availableCount--;
			}
			cout << "����Ʈ �Ͽ����ϴ�." << endl;
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
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << availableInk << endl;
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
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << availableToner << endl;
	}
};

int main() {
	InkPrint* inkP = new InkPrint("Officejet V40", "HP", 5, 10);
	LaserPrint* laserP = new LaserPrint("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	cout << "��ũ�� : ";
	inkP->show();
	cout << "������ : ";
	laserP->show();
	cout << endl;

	int count, select;
	string answer;

	while (1) {
		cout << "������(1: ��ũ��, 2: ������)�� �ż� �Է� >> ";
		cin >> select >> count;
		if (select == 1) inkP->printInkJet(count);
		else if (select == 2) laserP->printLaser(count);
		inkP->show();
		laserP->show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�? (y/n) >> ";
		cin >> answer;
		if (answer == "y") {
			cout << endl;
			continue;
		}
		else if (answer == "n") break;
		else cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
}