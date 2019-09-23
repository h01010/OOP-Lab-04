//(실습6) 아래 코드의 컴파일 에러를 고치시오. 단, x의 타입 (레퍼런스)을 유지해야함.

#include <iostream> 

int main()
{
	int a = 5;	//참조를 위한 변수가 존재해야 함
	int& x = a;	//쉽게 별명이라고 생각
	std::cout << x << std::endl;
}
