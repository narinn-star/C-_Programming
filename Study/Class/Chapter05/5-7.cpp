#include <iostream>
using namespace std;

class MyIntStack {
	int p[10]; //최대 10개의 정수 저장
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {
		tos = 0;
	}
	bool push(int n) { // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
		if (tos < 10) {
			p[tos] = n;
			tos++;
			return true;
		}
		else
			return false;
	}
	bool pop(int& n) { // 팝하여 n에저장. 스택이 비어있으면 false, 아니면 true 리턴
		tos--;
		if (tos > -1) {
			n = p[tos];
			return true;
		}
		else
			return false;
	}
};

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) { //11개를 푸시하면 마지막에는 stack full
		if (a.push(i))
			cout << i << " "; // 푸시된 값 에코
		else
			cout << endl << i + 1 << " 번째 stack full" << endl;
	}

	int n;
	for (int i = 0; i < 11; i++) { //11개를 팝하면, 마지막에는 stack empty
		if (a.pop(n))
			cout << n << " "; // 팝 한 값 출력 
		else
			cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}