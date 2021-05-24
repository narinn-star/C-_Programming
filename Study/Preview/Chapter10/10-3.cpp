#include <iostream>
using namespace std;

/*
배열의 원소를 반대 순서로 뒤집는 reverseArray() 함수를 템플릿으로 작성하라.

reverseArray()의 첫 번째 매개 변수는 배열에 대한 포인터이며 두 번째 매개 변수는 배열의 개수이다.

reverseArray()의 호출 사례는 다음과 같다.
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
        cout << x[i] << ' '; // 4 5 100 10 1이 출력된다. 
}