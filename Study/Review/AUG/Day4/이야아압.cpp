#include <iostream>
#include <string>
using namespace std;

class item {
	int iPrice;
	string iName;
public:
	item() { //item의 이름과 가격을 입력하여 멤버변수 초기화
		cout << "이름과 가격 입력" << endl;
		cin >> iName >> iPrice;
	}
	void setPrice(int cprice, string cname) {
		iPrice = cprice;
		iName = cname;
	}
};

class Storage {
private:
	int nData; //확보할 공간수
	item* itemStrg;
public:
	Storage(int nsize) {
		itemStrg = new item[nsize]; //동적 할당
		nData = nsize;
	}
	~Storage() {
		delete[] itemStrg;
	}
	void showList() {
		for (int i = 0; i < nData; i++) {
			
		}
	}
	void changePrice(string s, int newprice) {
		for (int i = 0; i < nData; i++) {
			if()
		}
	}
};

int main() {
	Storage items(5); //컵 1500 집게 2000 연필 200 볼펜 500 줄자 2000
	items.showList(); //입력된 아이템들의 이름과 가격 출력

	string s;
	int newprice;

	cin >> s >> newprice;
	items.changePrice(s, newprice);
	items.showList();
}