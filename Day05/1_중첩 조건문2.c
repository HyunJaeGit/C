#include<stdio.h>

// else if�� ��� else �ȿ� �ִ� if���� �ǹ�

int main() {
	int age;

	printf("���� �Է� : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("���� ");
	}
	else {
		if (age >= 17) {
			printf("����л� ");
		}
		else {
			if (age >= 14) {
				printf("���л� ");
			}
			else {
				printf("����л� ���� ");
			}
		}
	}

	printf("�Դϴ�\n");
}