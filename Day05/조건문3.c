#include<stdio.h>

int main() {
	// if ~ else
	// if ~ if�� ����

	int age;

	printf("���� �Է� : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("����	");
	}

	if (age <= 20) {
		printf("�̼����� ");		// �����Է� : [20]�� �Է��ϸ� 2���� if���� �Ѵ� ������ ����ȴ�.
	}

	printf("�Դϴ�\n");

}

// �帧)
// ���� -> (if) -> (if) -> ����