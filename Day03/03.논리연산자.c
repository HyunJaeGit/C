#include<stdio.h>

int main() {
	// �� ������ : ��/������ ����
	// ���� : &&, || , !

	// 1. && : and, ���� ��ΰ� ���̸� ����� ��
	// ( �ٸ� ���� ��(x) �����̶�� �Ѵ� )
	printf("True AND True ��� : %d\n", 1 && 1);
	printf("True AND True ��� : %d\n", 1 && 0);
	printf("True AND True ��� : %d\n", 0 && 1);
	printf("True AND True ��� : %d\n", 0 && 0);
	printf("\n");

	// 1. || : OR, ���� ��ΰ� �����̸� ����� ����
	// ( �ٸ� ���� ��(+) �����̶�� �Ѵ� )
	printf("True OR True ��� : %d\n", 1 || 1);
	printf("True OR True ��� : %d\n", 1 || 0);
	printf("True OR True ��� : %d\n", 0 || 1);
	printf("True OR True ��� : %d\n", 0 || 0);
	printf("\n");

	// 1. ! : NOT, ���� �������� ������ ������ �ٲ�
	// ( �ٸ� ���� ����/���� �����̶�� �Ѵ� )
	printf("NOT True ��� : %d\n", !1);
	printf("NOT AND True ��� : %d\n", !0);
	printf("\n");
}