//(�ǽ�4) ���� ���α׷��� "������"�� Ȱ���Ͽ� increment �Լ��� ��ǲ���� +1 �����Ͽ� ����Ʈ�ǵ��� �����غ�����
//(��, std::cout << " After increment: " << x << std::endl; ���� 56�� ����Ʈ �Ǿ�� ��).

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