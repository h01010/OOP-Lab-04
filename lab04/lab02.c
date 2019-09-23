//(실습 2) 위의 코드를 C 코드로 변경해 보자
//(100자 이내로 입력된다고 가정하고 별도의 예외 처리는 하지 않아도 됨)

#include<stdio.h>

int main() {
	char s[100];
	printf("문자열을 입력하세요(100자 이내) : ");
	scanf_s("%s", s,100);	//scanf_s("%s",s,size_of(char)*100);
	printf("입력된 문자는 %s\n",s);
	return 0;
}