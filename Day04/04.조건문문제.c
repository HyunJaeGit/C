#include <stdio.h>

int main() {
	// ���� 1. �Է��� �����Ͱ� 3�� ����� ���-> ���
	int num;
	
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num % 3 == 0) {
		printf("'%d' (3�� ����Դϴ�.)\n ", num);
	}
	else {
		printf("3�� ����� �ƴմϴ�.");
	}



}