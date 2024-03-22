#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// c/c++은 프로젝트 단위로 실행
int main() {
	printf("ASCII.c파일\n");
	printf("문자로 출력 = %c\n", 'A');
	printf("숫자로 출력 = %d\n", '0');
	//아스키코드=문자정보-임의의 숫자를 일대일 대응시켜서 소통할수 있게 한 약속
	// 'A'아스키 코드= 65, 'a'아스키코드=97
	// '0'아스키 코드= 48

	// 예제 영문자를 입력 받고
	// 영문자의 대소문자 바꾸어 출력
	
	char ch;
	
	printf("영문자를 입력하세요\n");
	
	scanf("%c", &ch);

	printf("입력된 영문자는 %c \n", ch);

	if (ch >= 65 && ch <= 90) {
		printf("입력된 영문자의 소문자는 %c\n", ch + 32);
	}

	if (ch >= 97 && ch <= 122) {
		printf("입력된 영문자의 대문자는 %c\n", ch - 32);
	}
	
	
}