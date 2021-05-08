#include <iostream>
#include <string>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() {
		delete[]mem;
	}
	void put(int index, int val) {
		mem[index] = val;
	}
	int get(int index) {
		return mem[index];
	}
	int getCapacity() {
		return capacity;
	}
};

class MyQueue : public BaseArray{
	int first = 0;
	int last = 0;
public:
	MyQueue(int capacity) : BaseArray(capacity) {

	}
	void enqueue(int n) {
		if (last >= getCapacity()) {
			cout << "Queue가 꽉 찼습니다." << endl;
		}
		else {
			last++;
			put(last, n);
		}
	}
	int dequeue() {
		if (last < 0) {
			cout << "Queue가 비었습니다." << endl;
		}
		else {
			++first;
			last--;
			return get(first);
		}
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return last;
	}
};

int main() {
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); //큐에 삽입
	}
	cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다 >> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << " "; //큐에서 제거하여 출력
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}