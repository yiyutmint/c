#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	//���� 5���� ������ �Է��� ��� ���� ��,
	// �������鿡 ���� �ѹ��� ��ȸ�ϸ�,
	// 60 �Ʒ��� ���� �߰ߵǸ� 60 ���� ���� ���� �Ѵ�.
	// �� �ڷ�, 5���� ������ ���� ��հ��� ���ض�.
	// �ٸ�, �迭�� �����ϵ� ������ ������ �迭�� ����ϰ�
	// int* pscore[5];
	// [] ��ȣ�� ������ �迭�� ������ ���� ����Ͽ���.
	// (�迭 �� ��ȸ���� �ٸ� ����� ã�� �� ��)

	printf("���� 5���� �Է��ϼ���\n");

	int score[5];
	int* pscore = score;

	for (int i = 0; i < 5; i++) {
		//scanf("%d", *pscore[i]);
		scanf("%d", pscore+i);  // pscore�� ���� �ּ�(�Ϲ� �迭������ ����)(pscore + i => 1000 + i * (intũ��(4byte)))
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

	printf("��հ�: %.1f\n", s / 5);

	double r = 0;
	for (int i = 0; i < 5; i++) {
		r += pscore[i];
		printf("%d\n", pscore[i]);
	}

	printf("��հ�: %.1f\n", r / 5);
	printf(" % .1f", r);

}