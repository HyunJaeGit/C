#include<stdio.h>

int main() {
	// 1. �̸�, ������, ����, �ּҸ� �Է� ���� ������ ����
	// ��, �������� char�� ����

	char name[10];
	char blood;
	int age;
	char address[50];

	// 2. 1���� ������ �Է¹����� �Է� �޴´�
	// �� ���� ������ �߻����ٵ� ���� ������ �� ������ ������

	printf("�̸� : ");
	scanf_s("%s", name, 10);

	rewind(stdin);

	printf("������ : ");
	scanf_s("%c", &blood);

	printf("���� : ");
	scanf_s("%d", &age);

	rewind(stdin);

	printf("�ּ� : ");
	scanf_s("%[^\n]", address, 50);

	//%��dhk %[^\n]�� ������ ���Ͱ��� �����ͷ� �ν� �Ͽ� �������� �з����⶧���� rewind(stdin)�� ���۸� �ʱ�ȭ

	// 3. �Է� ���� ������ �Ʒ��� ���� ���
	// ���)
	// �̸� : ȫ�浿 (22��, O��)
	// �ּ� : �λ� ������ �ؿ�뱸 ����

	printf("\n�̸� : %s (%d��, %c��)\n", name, age, blood);
	printf("�ּ� : %s\n", address);


}