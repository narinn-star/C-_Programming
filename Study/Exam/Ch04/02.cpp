#include <iostream>	
using namespace std;

class Sample {
	int* p;		//�׳� Sample �����ڿ��� �����迭 �������� �����Ѱ�
	int size;	//�迭 ũ��
public:
	Sample(int n) {		// main���� Sample ��ü ���� �� �� (10) �����ϱ� �ű⿡ �°� ������ ������ְ�
		// �迭 ũ�� �������ְ�
		size = n;
		// �� ũ��� �����Ҵ�
		p = new int[n];
	}

	//�̰͵� �ؿ��� ������ �ߴ°� �ϳ��� ���ְ��� �����ϰ� �Լ� �ۼ��ϱ�

	// main���� �Է¹޴� ���� �Լ��� �ۼ��ߴٰ� �����ϸ� ��
	void read() {
		for (int i = 0; i < 10; i++) {
			//�迭 �����Ѱſ� �ٷ� �Է¹޴°� ���� ?
			cin >> p[i];
		}
	}
	// �̰� ���� main���� �� ���� ���⼭ �Լ��� �ۼ��ߴٰ� �����ϸ� �˴ϴ�.
	void write() {
		for (int i = 0; i < 10; i++) {
			// �ϳ��� ������ְ�
			cout << p[i] << " ";
		}
		cout << endl;
	}
	//ū �� ã�� ������ ��� �˰� ������� ??
	int big() {
		int max = 0;
		for (int i = 0; i < 10; i++) {
			if (max < p[i])
				max = p[i];
		}
		return max;
	}
	//�̰� �׳� �Ƚᵵ ��. ������ ���������� main���� ���� ȣ���ϴ°� ���⶧���� �������� �ʾƵ� ��
	~Sample() {}
};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}