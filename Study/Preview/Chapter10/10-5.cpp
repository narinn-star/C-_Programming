#include <iostream>
using namespace std;

/*
���� �Լ��� �Ű� ������ �־��� �� ���� int �迭�� ������ ���ο� int �迭�� ���� �Ҵ�޾� �����Ѵ�.

concat�� int �迭�� �ƴ϶� �ٸ� Ÿ���� �迭�� ó���� �� �ֵ��� �Ϲ�ȭ�϶�.
*/

template <class T>
T concat(T a[], int sizea, T b[], int sizeb) {

}

int main() {
	int* concat(int a[], int sizea, int b[], int sizeb);

    int x[] = { 1, 10, 100, 5, 4 };
    int y[] = { 7, 6, 10, 9 };
    int* a = concat(x, 5, y, 4);
    int aSize = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]); // a�� ����ִ� ������ ���� 

    for (int i = 0; i < aSize; i++)
        cout << a[i] << ' ';
}