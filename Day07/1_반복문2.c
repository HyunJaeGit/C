#include<stdio.h>

int main() {
	// 1. �ݺ����� ������ 2���� ��� (��, x1 ~ x9����)
	// 2. ������ �Է¹����� ��ȯ�ؼ� �Է��� �������� ������ �Ѵ�
	int i = 1, dan;

	printf("�� ��? ");
	scanf_s("%d", &dan);

	while (i <= 9) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}
	printf("\n");

	// 3. �������ε� ���
	i = 9;

	while (i >= 1) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i--;
	}
}