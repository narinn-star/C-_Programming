#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram() {
		size = 100 * 1024;
		for (int i = 0; i < size; i++) {
			mem[i] = 0;
		}
	}
	~Ram() {
		cout << "�޸� ���ŵ�" << endl;
	}
	char read(int address) {
		return mem[address];
	}
	void write(int address, char value) {
		mem[address] = value;
	}
};

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 ������ �� = " << (int)ram.read(102) << endl;
}