#include <iostream>
#include <string>
using namespace std;

class item {
	int iPrice;
	string iName;
public:
	item() { //item�� �̸��� ������ �Է��Ͽ� ������� �ʱ�ȭ
		cout << "�̸��� ���� �Է�" << endl;
		cin >> iName >> iPrice;
	}
	void setPrice(int cprice, string cname) {
		iPrice = cprice;
		iName = cname;
	}
};

class Storage {
private:
	int nData; //Ȯ���� ������
	item* itemStrg;
public:
	Storage(int nsize) {
		itemStrg = new item[nsize]; //���� �Ҵ�
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
	Storage items(5); //�� 1500 ���� 2000 ���� 200 ���� 500 ���� 2000
	items.showList(); //�Էµ� �����۵��� �̸��� ���� ���

	string s;
	int newprice;

	cin >> s >> newprice;
	items.changePrice(s, newprice);
	items.showList();
}