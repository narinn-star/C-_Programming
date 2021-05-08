#include <iostream>
#include <string>
using namespace std;

class BaseArray {
    int capacity; // �迭�� ũ��
    int* mem; // ���� �迭�� ����� ���� �޸��� ������
protected: // �����ڰ� protected 
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyStack :public BaseArray {
    int last = 0;
public:
    MyStack(int capacity) : BaseArray(capacity) {

    }
    void push(int n) {
            put(last, n);
            last++;
    }
    int capacity() {
        return getCapacity();
    }
    int length() {
        return last;
    }
    int pop() {
        last--;
        return get(last);
    }
};

int main() {
    MyStack mStack(100);
    int n;
    cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n); // ���ÿ� Ǫ�� 
    }
    cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
    cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
    while (mStack.length() != 0) {
        cout << mStack.pop() << ' '; // ���ÿ��� �� 
    }
    cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}