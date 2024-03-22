#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// stdio.h;; 입출력 함수 포함하는 라이브러리

int main() {

	//입출력;; printf(), scanf()
	int num;	//정수형
	char ch;	//문자형(c언어에는 String형이 없음)
	double d;	//실수형
	//int -> char -> double 순으로 입력
	scanf("%d %c %lf", &num, &ch, &d);

	//%c;; "공백을 입력 받을수 있다.

	printf("안녕하세요 이유탁 입니다.\n");

	printf("정수값 = %d\n", num);
	printf("문자 = %c\n", ch);
	printf("실수값 = %.1f\n", d);
	// double행 출력시 %f 사용해도 무관
}