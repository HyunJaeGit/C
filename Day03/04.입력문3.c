#include<stdio.h>

// scanf()�� ���ڿ� �Է½� ���� �˻縦 �����ʾ� ����� �Լ�
// - ���� ���̺��� �� ������ ���ڿ��� �ԷµǸ� ���� �뷮���� �� �Ѿ �޸𸮸� ����ϰ� ��
// - �ٸ� ���α׷��� �����͸� ��� ����� �־� �ϸ� �ȵǴ� ����
//
// �̸� ��ü�ϱ� ���Ͽ� visual studio ������ scanf_s()��� �Լ��� �ִ�.
// - ����� scanf_s() �� ǥ�� �Լ��� �ƴ϶� �ٸ� ���α׷��� ����ϸ� ���� �� �ִ�.

int main() {
	int it;
	double db;
	char ch;
	char str[10];

	printf("���� �Է� :");
	scanf_s("%c", &ch);

	printf("���� �Է� :");
	scanf_s("%d", &it);

	printf("���� �Է� :");
	scanf_s("%lf", &db);

	printf("���� �Է� :");
	scanf_s("%s", str, 10);		// 10���� ���ڸ� �ްڴٰ� ������ �޾ƾ���.

	printf("\n ch = %c, it = %d\n", ch, it);
	printf("\n db = %.2lf, str = %s\n", db, str);


}