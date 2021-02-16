/*
[함수 중복의 모호성]
1. 형 변환으로 인한 모호성
	- 함수의 매개 변수 타입과 호출 문의 실인자 타입이 일치하지 않는 경우
		double square(double a);
		...
		square(3); => 컴파일 오류 발생 X

		※ char -> int -> long -> float -> double
		   컴파일러가 작은 타입을 큰 타입으로 자동 형 변환함
		   즉, 왼쪽에 있는 타입이 오른쪽에 있는 어떤 타입으로도 자동 형 변환 가능

		float square(float a);
		double square(double a);
		...
		square(3) => 컴파일 오류 발생 O

		=> 정수 3을 float 타입으로 형변환할지 double 타입으로 형변환할지 모호함

2. 참조 매개 변수로 인한 모호성
	- 중복된 함수 중에서 참조 매개 변수를 가진 함수가 있는 경우
		int add(int a, int b);
		int add(int a, int& b);
		...
		int s = 10, t = 20;
		add(s, t);

		=> 어떤 함수를 호출하는 것인지 판단할 수 없음

3. 디폴트 매개 변수로 인한 모호성
	- 디폴트 매개 변수를 가진 함수가 보통 매개 변수를 가진 함수와 중복 작성될 경우
		void msg(int id)
		void msg(int id, string s = "")
		...
		msg(6);

		=> 어떤 함수를 호출해도 무관하므로 컴파일 오류
*/