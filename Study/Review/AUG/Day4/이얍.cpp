#include <iostream>
using namespace std;

class Storage {
	int strg[20];
	int nData;
public:
	Storage(int nsize) {
		
	cout << "�ڷ� " << nsize << "�� �Է� : ";
		for (int i = 0; i < nsize; i++) {
			cin >> strg[i];
		}
		nData = nsize;
	}
	void showList() {
		cout << nData << " : ";
		for (int i = 0; i < nData; i++) {
			cout << strg[i] << ' ';
		}
		cout << endl;
	}
	int multipleN(int n) {
		int num = n % 10;
		int count = 0;
		for (int i = 0; i < nData; i++) {
			if (strg[i] % n == 0) {
				count++;
			}
		}
		cout << n << "�� ����� " << count << "���Դϴ�." << endl;

		return count;
	}
	void add_Strg(Storage s) {
		int size = nData + s.nData;
		if (nData > 20) {
			cout << "������ ������ �� ����" << endl;
		}
		else {
			int p = 0;
			for (int i = nData; i < size; i++, p++) {
				strg[i] = s.strg[p];
			}
			cout << endl;
		}
		nData = size;
	}
};

void main() {
	Storage s1(4);
	s1.showList();

	Storage s2(10);
	s2.showList();

	s1.multipleN(3);
	s1.add_Strg(s2);
	s1.showList();
}