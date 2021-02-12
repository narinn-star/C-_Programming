/*
[복사 생성자]
1. 복사 생성자 선언
	class ClassName {
		ClassName(ClassName& c); // 복사 생성자
	};
	- 복사 생성자의 매개 변수는 오직 하나
	- 자기 클래스에 대한 참조로 선언

2. 복사 생성자 실행
	Circle src(30); //보통 생성자 호출
	Circle dest(src); //src 객체를 복사하여 dest 객체 생성. 복사 생성자 Circle(Circle& c) 호출

3. 얕은 복사 생성자의 문제점
	- 포인터 타입의 멤버 변수가 없는 클래스의 경우는 문제 발생 X
	Ex_5-10 결과
		- 불법적인 메모리 접근으로 오류가 발생함.
		- 메모리를 공유하기 때문에 객체 소멸 실행 시 반환 할 메모리가 없음.

4. 묵시적 복사 생성
	Person daughter(father); // 복사 생성자를 명시적으로 호출
	- 객체로 초기화하여 객체가 생성될 때
		- Person son = father // 복사 생성자 자동 호출 => Person son(father);
		- ※ Person son; son = father; // 복사 생성자 호출 X
	- '값에 의한 호출'로 객체가 전달될 때
		- 함수의 매개 변수 객체가 생성될 때 복사 생성자 자동 호출
		- 값에 의한 호출로 매개 변수 객체가 생성될 때 생성자 대신 복사 생성자가 실행됨
		- 복사 생성자 구현되지 않은 경우 : 디폴트 복사 생성자 실행
	- 함수가 객체를 리턴할 때
		- Person g(){
			Person mother(2, "Jane");
			return mother; // mother 복사본을 생성하여 복사본 리턴. 사본이 만들어질 때 복사 생성자 호출
		  }
		  g();
		- g()가 mother 객체 리턴할 때, mother 객체의 복사본을 만들어 넘겨줌
*/