#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//������ : "����Ű�� ��"
	//&(�ּҿ�����),*

	int num = 5;
	printf("��: %d\n", num);
	printf("�ּҰ�: %d\n", &num); // num�� ����� �ּҸ� ��� &(�ּҿ����ڴ� ������ �޸� �ּ� ��ȯ)
	printf("\n");
	// ������ ���� = "Ư�� �޸𸮸� ����Ű�� ����"
	// - num�� ����Ű�� ���� ����
	int* pnum;  // "��� ������ ����Ű�� pnum���� ����"
	pnum = &num;
	printf("�׳� pnum ���: %d\n", pnum);
	printf("*pnum ���: %d\n", *pnum);
	printf("&pnum ���: %d\n", &pnum);

	//���� 5���� ������ �Է��� ��� ���� ��,
	// �������鿡 ���� �ѹ��� ��ȸ�ϸ�,
	// 60 �Ʒ��� ���� �߰ߵǸ� 60 ���� ���� ���� �Ѵ�.
	// �� �ڷ�, 5���� ������ ���� ��հ��� ���ض�.
	// �ٸ�, �迭�� �����ϵ� ������ ������ �迭�� ����ϰ�
	// int* pscore[5];
	// [] ��ȣ�� ������ �迭�� ������ ���� ����Ͽ���.
	// (�迭 �� ��ȸ���� �ٸ� ����� ã�� �� ��)
	
	int a;
	int b;
	int c;
	int d;
	int e;
	int s = 0;

	printf("���� 5���� �Է��ϼ���.\n");
	scanf("%d, %d, %d, %d, %d", &a, &b, &c, &d, &e);
	printf("�Էµ� ���� %d, %d, %d, %d, %d\n", a, b, c, d, e);
	
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

	printf("���������: %d", s / 5);
}