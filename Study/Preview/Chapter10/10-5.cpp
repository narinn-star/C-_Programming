#include <iostream>
using namespace std;

/*
다음 함수는 매개 변수로 주어진 두 개의 int 배열을 연결한 새로운 int 배열을 동적 할당받아 리턴한다.

concat가 int 배열뿐 아니라 다른 타입의 배열도 처리할 수 있도록 일반화하라.
*/

template <class T>
T concat(T a[], int sizea, T b[], int sizeb) {

}

int main() {
	int* concat(int a[], int sizea, int b[], int sizeb);

    int x[] = { 1, 10, 100, 5, 4 };
    int y[] = { 7, 6, 10, 9 };
    int* a = concat(x, 5, y, 4);
    int aSize = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]); // a에 들어있는 원소의 개수 

    for (int i = 0; i < aSize; i++)
        cout << a[i] << ' ';
}