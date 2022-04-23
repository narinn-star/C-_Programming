#include <iostream>	
#include <string>
using namespace std;

class Account {
public:
	string owner;		// 이름
	int id, money;		// id, 통장에 남은 돈

	Account(string n, int i, int m) {	// 주어진 메인에 보면 3개 넘겨주니까 여기도 거기에 맞게 3개
		// 각각 받아온 값을 class 안에서 선언한 변수 안에다가 집어넣고
		owner = n;
		id = i;
		money = m;
	}

	//밑에 빨간줄 뜨면 빨간줄 하나씩 없앤다는 느낌으로 함수 하나씩 작성하기

	// money = m 해서 초기값 넣어뒀으니까 이제 저금되는 돈 더해주고
	void deposit(int in) {
		money += in;
	}

	// 출금하는 돈은 빼주는데 여기서 void withdraw가 아니고 int withdraw인 이유는 
	// main에 보면 int money = a.withdraw()라고 되어있지요?
	// int 값을 받아서 바로 main의 money에 넣어줘야하기 때문임니다.
	// void로 선언하게되면 아무것도 return하지 않기때문에 아래 int money = ... 는 오류가나요
	int withdraw(int out) {
		money -= out;
		return money;
	}

	// Kitae씨 이름 반환해줘야겠죠?
	string getOwner() {
		return owner;
	}

	// 잔액도 출력하려면 int형으로 함수 만들고, 위에서 저금, 출금 하면서 money에 저장해둔 돈 그냥 return시키면 되겠지요?
	int inquiry() {
		return money;
	}
};

//문제에 주어진 main 그대로입니다
int main() {
	Account a("Kitae", 1, 5000);	//id 1번, 잔액 5000원, 이름이 Kitae인 계좌 생성
	a.deposit(50000);	//50000원 저금

	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

	int money = a.withdraw(20000);	//20000원 출금, withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}