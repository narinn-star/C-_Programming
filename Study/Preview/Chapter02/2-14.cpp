#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	char c[10001];
	int count[26] = { 0 };
	cin.getline(c, 10000, ';');
	
	cout << "�� ���ĺ� �� " << strlen(c) -1 << "\n"; //�� (���� �� �κ� �����ϰ� ����)

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
	//for�� ȥ�� �ٽ� �Ẹ��
}