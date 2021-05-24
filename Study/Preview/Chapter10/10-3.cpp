#include <iostream>
using namespace std;

/*
�迭�� ���Ҹ� �ݴ� ������ ������ reverseArray() �Լ��� ���ø����� �ۼ��϶�.

reverseArray()�� ù ��° �Ű� ������ �迭�� ���� �������̸� �� ��° �Ű� ������ �迭�� �����̴�.

reverseArray()�� ȣ�� ��ʴ� ������ ����.
*/

template <class T>
void reverseArray(T x[], int n) {
    int j = n - 1;
    for (int i = 0; i < j; i++, j--) {
        T tmp = x[j];
        x[j] = x[i];
        x[i] = tmp;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArray(x, 5);
    for (int i = 0; i < 5; i++)
        cout << x[i] << ' '; // 4 5 100 10 1�� ��µȴ�. 
}