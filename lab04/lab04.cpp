//(실습4) 위의 프로그램을 "포인터"를 활용하여 increment 함수의 인풋값이 +1 증가하여 프린트되도록 수정해보세요
//(즉, std::cout << " After increment: " << x << std::endl; 에서 56이 프린트 되어야 함).

#include<iostream>

void increment(int* x) {
	++(*x);
}

int main() {
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(&x);
	std::cout << " After increment: " << x << std::endl;

	system("pause");
	return 0;
}