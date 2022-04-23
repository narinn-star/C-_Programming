#include <iostream>	
using namespace std;

class Sample {
	int* p;		//그냥 Sample 생성자에서 동적배열 받으려고 선언한거
	int size;	//배열 크기
public:
	Sample(int n) {		// main에서 Sample 객체 생성 할 때 (10) 있으니까 거기에 맞게 생성자 만들어주고
		// 배열 크기 대입해주고
		size = n;
		// 그 크기로 동적할당
		p = new int[n];
	}

	//이것도 밑에서 빨간줄 뜨는거 하나씩 없애간다 생각하고 함수 작성하기

	// main에서 입력받는 것을 함수로 작성했다고 생각하면 됨
	void read() {
		for (int i = 0; i < 10; i++) {
			//배열 선언한거에 바로 입력받는건 알조 ?
			cin >> p[i];
		}
	}
	// 이것 또한 main에서 할 일을 여기서 함수로 작성했다고 생각하면 됩니다.
	void write() {
		for (int i = 0; i < 10; i++) {
			// 하나씩 출력해주고
			cout << p[i] << " ";
		}
		cout << endl;
	}
	//큰 값 찾는 로직은 모두 알고 계시지요 ??
	int big() {
		int max = 0;
		for (int i = 0; i < 10; i++) {
			if (max < p[i])
				max = p[i];
		}
		return max;
	}
	//이건 그냥 안써도 됨. 문제에 나와있지만 main에서 따로 호출하는게 없기때문에 구현하지 않아도 됨
	~Sample() {}
};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}