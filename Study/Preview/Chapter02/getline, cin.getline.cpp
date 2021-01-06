/*
cin.getline�� getline�� ������ !

1. cin.getline

cin�� ����Լ�!
������� �����Ͽ� ���ڿ��� ����

-------How to use?--------
char �迭 ���� -> cin.getline()�� ù �Ű����� : char �迭��, �ι�° �Ű����� : ���ڿ��� ũ��

Example)
#include <iostream>

int main(){
	char a[100];

	cin.getline(a,100);
}

2. getline

getline()�� <string>�� ����
string���� ���ڿ��� ������ �� ���

-------How to use?--------
string ���� -> ù��° �Ű������� �Է¹�� ����
			-> �ι�° �Ű������� string�� ������
			-> ����° �Ű������� �Է¹��� ���ڵ��� ������ ������ ������ ����

Example)
#include <iostream>
#include <string>

int main(){
	string str;

	getline(cin,str); //ǥ���Է¹������ str�� ���ڿ� '��'���� ����
	getline(cin,str,s); //ǥ���Է¹������ str�� 's'���� ����
}
*/