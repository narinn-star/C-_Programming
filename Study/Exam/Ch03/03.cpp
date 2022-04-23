#include <iostream>	
#include <string>
using namespace std;

class Account {
public:
	string owner;		// �̸�
	int id, money;		// id, ���忡 ���� ��

	Account(string n, int i, int m) {	// �־��� ���ο� ���� 3�� �Ѱ��ִϱ� ���⵵ �ű⿡ �°� 3��
		// ���� �޾ƿ� ���� class �ȿ��� ������ ���� �ȿ��ٰ� ����ְ�
		owner = n;
		id = i;
		money = m;
	}

	//�ؿ� ������ �߸� ������ �ϳ��� ���شٴ� �������� �Լ� �ϳ��� �ۼ��ϱ�

	// money = m �ؼ� �ʱⰪ �־�����ϱ� ���� ���ݵǴ� �� �����ְ�
	void deposit(int in) {
		money += in;
	}

	// ����ϴ� ���� ���ִµ� ���⼭ void withdraw�� �ƴϰ� int withdraw�� ������ 
	// main�� ���� int money = a.withdraw()��� �Ǿ�������?
	// int ���� �޾Ƽ� �ٷ� main�� money�� �־�����ϱ� �����Ӵϴ�.
	// void�� �����ϰԵǸ� �ƹ��͵� return���� �ʱ⶧���� �Ʒ� int money = ... �� ����������
	int withdraw(int out) {
		money -= out;
		return money;
	}

	// Kitae�� �̸� ��ȯ����߰���?
	string getOwner() {
		return owner;
	}

	// �ܾ׵� ����Ϸ��� int������ �Լ� �����, ������ ����, ��� �ϸ鼭 money�� �����ص� �� �׳� return��Ű�� �ǰ�����?
	int inquiry() {
		return money;
	}
};

//������ �־��� main �״���Դϴ�
int main() {
	Account a("Kitae", 1, 5000);	//id 1��, �ܾ� 5000��, �̸��� Kitae�� ���� ����
	a.deposit(50000);	//50000�� ����

	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;

	int money = a.withdraw(20000);	//20000�� ���, withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}