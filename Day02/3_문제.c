#include<stdio.h>

int main() {
	// 1. �̸�, ����, Ű, �������� ������ ������ ����
	// ��, �������� char�� ����
	char name[10] = "�ڼ���";
	int age;
	double height;
	char blood;

	// 2. 1���� ������ ������ ���� ä���
	// ��, �������� 2�ڸ��� �� �� ���� AB���� ����
	age = 26;
	height = 162.3;
	blood = 'B';

	// 3. ���� �� ������ ����ϸ� �Ʒ��� ����
	// �̸� : �ڼ��� (26��, B��)
	// ���� : 162.3cm
	printf("�̸� : %s (%d��, %c��)\n", name, age, blood);
	printf("���� : %.1lfcm\n", height);
}