#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; //src를 다른 단위로 변환
	virtual string getSourceString() = 0; // src 단위 명칭
	virtual string getDestString() = 0; // dest 단위 명칭
public:
	Converter(double ratio) {
		this->ratio = ratio;
	}
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
	double km;
public:
	KmToMile(double km) : Converter(km) {
		this->km = km;
	}
	double convert(double src) {
		return src / km;
	}
	string getSourceString() {
		return "Km";
	}
	string getDestString() {
		return "Mile";
	}
};

int main() {
	KmToMile toMile(1.609344); // 1mile은 1.609344 Km
	toMile.run();
}