#include<stdio.h>

int main() {
	// 1. �̸�, ������ ������ ������ ������ ����
	// ��, �������� ������ ����
	char name[10];
	int kor, eng, mat, sum;
	double avg;


	// 2. �Է¹��� Ȱ���ؼ� 1���� ������ ���� �Է�

	printf("�̸� : ");
	scanf_s("%s", name, 10);

	printf("���� :");
	scanf_s("%d", &kor);

	printf("���� : ");
	scanf_s("%d", &eng);

	printf("���� : ");
	scanf_s("%d", &mat);

	rewind(stdin);

	sum = kor + eng + mat;
	avg = sum / 3.0;

	rewind(stdin);



	// 3. �̸��� �հ� ����� ȭ�鿡 ���

	printf("\n�̸� : %s\n", name);
	printf("\n���� : %d��", kor);
	printf("\n���� : %d��", eng);
	printf("\n���� : %d��", kor);
	printf("\n�հ� : %d��", sum);
	printf("\n��� : %.2lf��", avg);
	printf("\n\n Ȯ�� : PRESS SPACE BAR\n\n");
}