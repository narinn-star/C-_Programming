#include <iostream>
using namespace std;

class Storage {
private:
	int nData;
	int* strg;
public:
	Storage(int nsize) {
		cout << "자료 " << nsize << "개 입력 : ";	
	}
	~Storage() {
		delete[] strg;
	}
	void showList() {

	}
	void add_Strg(Storage s) {

	}
};

void main() {
	Storage s1(4);
	s1.showList();

	Storage s2(10);
	s2.showList();

	s1.add_Strg(s2);
	s1.showList();
}