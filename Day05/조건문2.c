#include<stdio.h>


int main() {
	
	// else : if�� ���� ����, ���� ������ �����̸� ���ӹ����� ����
	// - ���� �����̹Ƿ� �ܵ����� ��� �Ұ���

	int age;

	printf("���� �Է� : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("���� ");
	}
	else {
		printf("�̼����� ");
	}


	printf("�Դϴ�\n");
}

// �帧)
// ���� -> (if ~ else) -> ����