#include<stdio.h>

int main() {
	// 2_Quiz4.c Ȯ��
	// - ���������͸� 3��� �����ؼ� Ǯ�����

	int A = 5, B = 7, C = 9;
	int cur;

	printf("���� �� �Է� : ");
	scanf_s("%d", &cur);

	int disA = cur - A;
	int disB = cur - B;
	int disC = cur - C;

	// ���밪
	if (disA < 0) { disA *= -1; }
	if (disB < 0) { disB *= -1; }
	if (disC < 0) { disC *= -1; }

	printf("�� �� ����) A : %d, B : %d, C : %d\n", disA, disB, disC);

	if (disA < disB & disA < disC) {
		printf("A�� ȣ���մϴ�.\n");
	}
	else 
		if(disB < disA & disB < disC) {
			printf("B�� ȣ���մϴ�.\n");
	}
	else {
		printf("C�� ȣ���մϴ�.\n");
	}
}