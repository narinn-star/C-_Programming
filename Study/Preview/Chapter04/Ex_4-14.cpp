#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25人 旭戚 機疾 庚切伸聖 脊径馬室推." << endl;

	getline(cin, s, '\n');

	int sum = 0;
	int startIndex = 0;
	int fIndex;
	while (true) {
		fIndex = s.find('+', startIndex); 
		
		if (fIndex == -1) { // '+' 庚切 降胃 X
			string part = s.substr(startIndex);
			if (part == "") break; // "2+3+", 聡 +稽 魁蟹澗 井酔
			cout << part << endl;
			sum += stoi(part);
			break; // +幻 赤生艦 希戚雌 遭楳 拝 琶推 X
		}
		
		int count = fIndex - startIndex; // 切研 庚切 鯵呪
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part); // s => int莫生稽 郊荷奄
		startIndex = fIndex + 1; // 伊事拝 昔畿什 巴君什 獣徹奄
	}
	cout << "収切級税 杯精 " << sum;
}
// 鎧亜肇切戚杏嬢胸惟背だだだだだだだだだだだだだだだだだだだだ