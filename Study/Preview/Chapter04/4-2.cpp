#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read() {
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	}
	void write() {
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}
	int big() {
		int big = p[0];
		for (int i = 1; i < size; i++) {
			if (p[i] > big)
				big = p[i];
		}
		return big;
	}
	~Sample() {
		delete[]p;
	}
};

int main() {
	Sample s(10); // 10�� ���� �迭�� ���� Sample ��ü ����
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl; // ���� ū �� ���
}