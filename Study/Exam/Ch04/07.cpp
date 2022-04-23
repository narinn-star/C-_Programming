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
	cout << "�����? ";
	cin >> size;
	Person* s = new Person[size];
	string n, h, t;
	cout << size << "���� �̸��� ��ȭ��ȣ�� �Է��� �ּ���" << endl; //��� ��/ ���� �Է�
	for (int i = 0; i < size; i++)
	{
		cout << "��� " << i + 1 << ">> ";
		cin >> n;
		cin >> h;
		cin >> t;

		s[i].set(n, h, t);
	}
	cout << endl;

	cout << endl << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >>"; //��ȭ��ȣ �˻�
	cin >> n;
	for (int j = 0; j < size; j++)
	{
		if (s[j].getName() == n)
			cout << "��ȭ��ȣ�� " << s[j].getTel() << "�̰�, ������ " << s[j].getTown() << "�Դϴ�." << endl << endl;
	}
	cout << "���⺰ �з��� ������ �����ϴ�." << endl;


	int count = 0;
	string* used = new string[size];
	int homecount = 0;
	string temp = ""; //�ߺ� Ȯ�ο� ����, ���� ���� �迭, ���ⰹ�� �� ����
	bool same = false;

	for (int l = 0; l < size; l++)
	{
		used[l] = s[l].getTown();
		count = 0;						// �ߺ� Ȯ��
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