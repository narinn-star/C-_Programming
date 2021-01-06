/*
cin.getline과 getline의 차이점 !

1. cin.getline

cin의 멤버함수!
띄어쓰기까지 포함하여 문자열로 저장

-------How to use?--------
char 배열 선언 -> cin.getline()의 첫 매개변수 : char 배열명, 두번째 매개변수 : 문자열의 크기

Example)
#include <iostream>

int main(){
	char a[100];

	cin.getline(a,100);
}

2. getline

getline()은 <string>에 정의
string형에 문자열을 저장할 때 사용

-------How to use?--------
string 선언 -> 첫번째 매개변수에 입력방식 정의
			-> 두번째 매개변수에 string형 변수명
			-> 세번째 매개변수에 입력받은 문자들을 어디까지 저장할 것인지 결정

Example)
#include <iostream>
#include <string>

int main(){
	string str;

	getline(cin,str); //표준입력방식으로 str에 문자열 '끝'까지 저장
	getline(cin,str,s); //표준입력방식으로 str에 's'까지 저장
}
*/