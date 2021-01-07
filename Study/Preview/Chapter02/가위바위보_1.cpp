#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중 하나를 입력하세요.\n";

	cout << "사또 >> ";
	char playerA[10];
	cin.getline(playerA, 10);

	cout << "아랑 >> ";
	char playerB[10];
	cin.getline(playerB, 10);

	if (strcmp(playerA,"가위") == 0) {
		if (strcmp(playerB, "가위") == 0) {
			cout << "비겼습니다.";
		}
		else if (strcmp(playerB, "바위") == 0) {
			cout << "아랑이 이겼습니다.";
		}
		else
			cout << "사또가 이겼습니다.";
	}
	else if (strcmp(playerA, "바위") == 0) {
		if (strcmp(playerB, "가위") == 0) {
			cout << "사또가 이겼습니다.";
		}
		else if (strcmp(playerB, "바위") == 0) {
			cout << "비겼습니다.";
		}
		else
			cout << "아랑이 이겼습니다.";
	}
	else {
		if (strcmp(playerB, "가위") == 0) {
			cout << "아랑이 이겼습니다.";
		}
		else if (strcmp(playerB, "바위") == 0) {
			cout << "사또가 이겼습니다.";
		}
		else
			cout << "비겼습니다.";
	}

}