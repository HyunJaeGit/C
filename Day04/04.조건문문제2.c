#include<stdio.h>

int main() {
	// ���� 2. ���밪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

	int num;
	int num2;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	num2 = (-1) * num;

	if (num >= 0) {
		printf("������ %d", num);
	}
	else {
		printf("������ %d", num2);
	}
	printf("�Դϴ�");
}