/*
1. 업 캐스팅 (up-casting)
	- 파생 클래스의 객체를 기본 클래스의 포인터로 가리키는 것
	  EX) ColorPoint cp;
	   	  ColorPoint *pDer = &cp;
		  Point* pBase = pDer; //업캐스팅
	  ※업 캐스팅한 기본 클래스의 포인터로는 기본 클래스의 멤버만 접근 가능

2. 다운 캐스팅 (down-casting)
	- 기본 클래스 포인터가 가리키는 객체를 파생 클래스의 포인터로 가리키는 것
	- 업 캐스팅과는 달리 명시적으로 형 변환을 지정해야함
	  EX) pDer = (ColorPoint *)pBase; //다운캐스팅 _ 강제 형 변환 필수
		  pDer->setColor("Red") //정상 컴파일
		  pDer->showColorPoint(); //정상 컴파일
*/