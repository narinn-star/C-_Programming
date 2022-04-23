#include <iostream>
#include <string>
using namespace std;
class Person {
	string name;
	string tel;
	string hometown;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	string getTown() { return hometown; }
	void set(string name, string hometown, string tel);

};
Person::Person()
{
	name = ""; tel = "";
};
void Person::set(string name, string hometown, string tel)
{
	this->name = name; this->hometown = hometown; this->tel = tel;
}

int main()
{
	int size;
	cout << "사람수? ";
	cin >> size;
	Person* s = new Person[size];
	string n, h, t;
	cout << size << "명의 이름과 전화번호를 입력해 주세요" << endl; //사람 수/ 정보 입력
	for (int i = 0; i < size; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> n;
		cin >> h;
		cin >> t;

		s[i].set(n, h, t);
	}
	cout << endl;

	cout << endl << "전화번호를 검색합니다. 이름을 입력하세요 >>"; //전화번호 검색
	cin >> n;
	for (int j = 0; j < size; j++)
	{
		if (s[j].getName() == n)
			cout << "전화번호는 " << s[j].getTel() << "이고, 고향은 " << s[j].getTown() << "입니다." << endl << endl;
	}
	cout << "고향별 분류는 다음과 같습니다." << endl;


	int count = 0;
	string* used = new string[size];
	int homecount = 0;
	string temp = ""; //중복 확인용 숫자, 고향 넣을 배열, 고향갯수 셀 숫자
	bool same = false;

	for (int l = 0; l < size; l++)
	{
		used[l] = s[l].getTown();
		count = 0;						// 중복 확인
		for (int m = 0; m < size; m++)
		{

			same = true;
			if (used[m] == s[l].getTown())

				count++;
			same = true;
			if (count > 1)
				same = false;
		}


		if (same == true)
		{
			temp = "";
			homecount = 0;
			cout << s[l].getTown() << " ";
			for (int n = 0; n < size; n++)
			{


				if (s[l].getTown() == s[n].getTown())
				{
					homecount++;
					temp = temp + (s[n].getName() + " " + s[n].getTel() + ", ");

				}
			}

			cout << homecount << " ";
			cout << temp << "\b\b";

			cout << endl;
		}

	}

	delete[] s;
	delete[] used;

}