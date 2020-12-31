#include <iostream> // cout과 << 연산자를 포함
int main() {
	/*
		cout과 << 연산자를 이용하여 화면에 출력한다.
	*/
	std::cout << "Hello\n"; //hello 출력
	std::cout << "첫 번째 예제입니다.";

	return 0; //생략가능
	/*
		cout은 출력 스트림 객체
		std:: 는 cout의 namespace가 std임을 표시
		<<연산자는 스트림 삽입 연산자 (오른쪽 피연산자 데이터를 왼쪽 스트림 객체에 삽입)
	*/
}