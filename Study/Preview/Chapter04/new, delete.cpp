/*
new & delete
1. 기본 활용
	- 데이터타입 *포인터변수 = new 데이터타입;
	delete 포인터변수;
	※ 데이터타입 : int, char, double + struct, class ...
EX 1)
	int *pInt = new int; // int 타입의 정수 공간 할당
	char *pChar = new char; // char 타입의 문자 공간 할당
	Circle *pCircle = new Circle // Circle 클래스 타입의 객체 할당

	delete pInt; // 할당받은 정수 공간 반환
	delete pChar; // 할당받은 문자 공간 반환
	delete pCircle; // 할당받은 객체 공간 반환
	
	2)
	int *p = new int; // 힙으로부터 int 타입의 정수 공간 할당
	if(!p) { // if(p == NULL)과 동일. => p가 NULL이면 메모리 할당받기 실패 
		cout << "할당 실패" << endl;
	}
	*p = 5;	// 할당받은 정수 공간에 5 기록
	int n = *p; // 할당받은 정수 공간에서 값 읽기 => n = 5
	delete p; // 할당받은 정수 공간 반환

2. 동적 할당 메모리 초기화
	- new를 이용하여 메모리 할당받을 떄, '초기값'을 지정하여 초기화
		(데이터타입 *포인터변수 = new 데이터타입(초기값);)
EX)
	int *pInt = new int(20); // 20으로 초기화된 int 공간 할당
	char *pChar = new char('a'); // 'a'로 초기화된 char 공간 할당

3. delete 사용 시 주의 사항
	- 할당받지 않은 메모리를 반환 => 실행 오류
	- 동일 메모리 반복 반환 => 실행 오류

4. 배열의 동적 할당/반환의 기본 형식
	- 데이터타입 *포인터변수 = new 데이터타입 [배열의 크기]; // 배열 동적 할당
	- delete [] 포인터변수; // 배열 메모리 반환
EX)
	int *p = new int [5]; // 크기가 5인 정수형 배열 동적 할당
	if(!p)
		return; // 메모리 할당 실패

	for(int i = 0; i < 5; i++)
		p[i] = i; // 배열에 순서대로 0, 1, 2, 3, 4 기록

	delete [] p; // 배열 메모리 반환

5. 배열 초기화 시 주의 사항
	- new로 배열을 동적 할당받을 때 '초기값'을 지정할 수 없음
		(int *pArray = new int [10] (20);) => 초기화 불가 

6. 배열 delete 시 주의 사항
	- 배열 반환할 때 delete 연산자에 []를 생략하면 컴파일 오류 발생은 하지 않으나,
	  비정상적인 반환이 일어남.
*/