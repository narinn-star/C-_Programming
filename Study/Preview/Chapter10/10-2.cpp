#include <iostream>
using namespace std;

/*
�� ���� �迭�� ���Ͽ� ������ true��, �ƴϸ� false�� �����ϴ� ���׸� �Լ� equalArrays()�� �ۼ��϶�.

���� main() �Լ��� �ۼ��Ͽ� equalArrays()�� ȣ���ϴ� �� ���� ��ʸ� ������.

equalArrays()�� ȣ���ϴ� �ڵ� ��ʴ� ������ ����.

*/

template <class T>
T equalArray(T x[], T y[], int n) {
    for (int i = 0; i < 5; i++) {
        if (x[i] == y[i]) {
            return true;
        }
        else
            return false;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    int y[] = { 1, 10, 100, 5, 4 };
    if (equalArray(x, y, 5))
        cout << "����"; // �迭 x, y�� �����Ƿ� "����" ��� 
    else
        cout << "�ٸ���";
}