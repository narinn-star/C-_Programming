/*
[static 멤버]
	- 외부에 전역(global) 변수로 선언
	- 프로그램과 생명을 같이함
	- 동일한 클래스의 모든 객체들에 의해 공유
1. 객체의 멤버로 접근하는 방법
	EX)
	Person lee;
	lee.sharedMoney = 500; //객체 이름으로 접근

	Person *p;
	p = &lee;
	p->addShared(200); //객체 포인터로 접근

2. 클래스명과 범위지정 연산자(::)로 접근
	EX)
	Person::sharedMoney = 200; //클래스명으로 접근
	han.sharedMoney = 200; //동일 표현

	Person::addShared(200); //클래스명으로 접근
	lee.addShared(200); //동일 표현

	※non-static 멤버는 클래스명으로 접근 불가 (포인터로만 접근 가능)

3. static 활용
	- 전역 변수나 전역 함수를 클래스에 캡슐화
		전역 변수와 전혁 함수를 선언하는 대신 클래스에 static 멤버로 선언하기
	- 객체 사이에 공유 변수를 만들고자 할 때

4. static 멤버 함수 특징
	- static 멤버 함수는 오직 static 멤버들만 접근
		static 멤버 함수에서 non-static 멤버에 접근하는 것은 허용 X

		※non-static 멤버 함수는 static 멤버를 접근하는데 제약이 없음
	- static 멤버 함수는 this를 사용할 수 없음
		static 멤버 함수는 객체가 생기기 전부터 호출 가능하기 때문


	*/