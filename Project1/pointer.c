#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//포인터 : "가리키는 것"
	//&(주소연산자),*

	int num = 5;
	printf("값: %d\n", num);
	printf("주소값: %d\n", &num); // num이 저장된 주소를 출력 &(주소연산자는 변수의 메모리 주소 반환)
	printf("\n");
	// 포인터 변수 = "특정 메모리를 가리키는 변수"
	// - num을 가리키는 변수 생성
	int* pnum;  // "어느 지점을 가리키는 pnum변수 생성"
	pnum = &num;
	printf("그냥 pnum 출력: %d\n", pnum);
	printf("*pnum 출력: %d\n", *pnum);
	printf("&pnum 출력: %d\n", &pnum);

	//예제 5개의 성적을 입력을 모두 받은 뒤,
	// 성적값들에 대해 한번씩 순회하며,
	// 60 아래의 값이 발견되면 60 으로 값을 변경 한다.
	// 그 뒤로, 5개의 성적에 대한 평균값을 구해라.
	// 다만, 배열을 가용하되 포인터 형태의 배열을 사용하고
	// int* pscore[5];
	// [] 기호는 포인터 배열을 선언할 때만 사용하여라.
	// (배열 값 죄회에선 다른 방법을 찾아 볼 것)
	
	int a;
	int b;
	int c;
	int d;
	int e;
	int s = 0;

	printf("점수 5개를 입력하세요.\n");
	scanf("%d, %d, %d, %d, %d", &a, &b, &c, &d, &e);
	printf("입력된 점수 %d, %d, %d, %d, %d\n", a, b, c, d, e);
	
	int* pscore[5] = {&a, &b, &c, &d, &e};
	
	for (int i = 0; i < sizeof(pscore); i++) {
		if (*pscore[i] < 60) {
			*pscore[i] = 60;
		}
	}
	printf("ok\n");
	for (int i = 0; i < sizeof(pscore); i++) {
		int s = 0;
		s += *pscore[i];
	}

	printf("평균점수는: %d", s / 5);
}