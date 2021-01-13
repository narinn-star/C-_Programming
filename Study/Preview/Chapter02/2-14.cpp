#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	char c[10001];
	int count[26] = { 0 };
	cin.getline(c, 10000, ';');
	
	cout << "총 알파벳 수 " << strlen(c) -1 << "\n"; //땡 (띄어쓰기 한 부분 제외하고 세기)

	for (int i = 0; i < strlen(c); i++) {
		count[int(c[i] )- 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << char(i + 97) << " (" << count[i] << ")\t: ";
		for (int j = 0; j < count[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//for문 혼자 다시 써보기
}