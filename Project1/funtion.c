#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// n=5, 5*4*3*2*1 ������ ���� ������ ����
// n * factorial(n - 1) ->  n * (n - 1) * factorial(n - 2) -> n * (n - 1) * (n - 2) *...* factorial(n - (n - 1)) -> n * (n - 1) * (n - 2) *...* 1)
int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1); 
	}
}

//��� = �ڱ��ڱ��� ȣ���ϴ� �Լ�
int main() {
	// ���� ���丮��
	// n�� �Է� �ް�, n! ���� ���϶�

	//1. n �Է�
	int n;
	scanf("%d", &n);

	int result = factorial(n);
	printf("�����: %d", result);

}