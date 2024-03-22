#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	//예제 5개의 성적을 입력을 모두 받은 뒤,
	// 성적값들에 대해 한번씩 순회하며,
	// 60 아래의 값이 발견되면 60 으로 값을 변경 한다.
	// 그 뒤로, 5개의 성적에 대한 평균값을 구해라.
	// 다만, 배열을 가용하되 포인터 형태의 배열을 사용하고
	// int* pscore[5];
	// [] 기호는 포인터 배열을 선언할 때만 사용하여라.
	// (배열 값 죄회에선 다른 방법을 찾아 볼 것)

	printf("점수 5개를 입력하세요\n");

	int score[5];
	int* pscore = score;

	for (int i = 0; i < 5; i++) {
		//scanf("%d", *pscore[i]);
		scanf("%d", pscore+i);  // pscore의 시작 주소(일반 배열에서도 동일)(pscore + i => 1000 + i * (int크기(4byte)))
	}

	for (int i = 0; i <5 ; i++) {
		if (*(pscore+i) < 60) {
			*(pscore+i) = 60;
		}
	}

	double s = 0;
	for (int i = 0; i < 5; i++) {
		s += *(pscore+i);
	}

	printf("평균값: %.1f\n", s / 5);

	double r = 0;
	for (int i = 0; i < 5; i++) {
		r += pscore[i];
		printf("%d\n", pscore[i]);
	}

	printf("평균값: %.1f\n", r / 5);
	printf(" % .1f", r);

}