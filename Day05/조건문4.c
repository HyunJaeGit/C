#include<stdio.h>

int main() {
	// else if : if�� ���� ����, ���� ������ ó���� �� ���
	// - ���� ������ �����̸� ���ǽ��� �˻�
	// - ���̸� ���� ������ ����, �����̸� ��������

	int age;

	printf("���� �Է� : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("���� ");

	}
	else if (age >= 17) {
		printf("����л�");
	}
	else if (age >= 14) {
		printf("���л�");
	}
	else {
		printf("�ʵ��л�");
	}

	printf("�Դϴ�. \n");

}