#include<stdio.h>
#include<string.h>	// ���ڿ� ���� �Լ����� �ִ�

int main() {
	char str1[20] = "hello world!!!";
	char str2[20];

	// 1. strlen() : String Length. ���� ������ ��ȯ
	printf("str1�� ũ�� : %d byte\n", sizeof(str1));
	printf("str1�� ���� ���� : %d ��\n\n", strlen(str1));


	// str2 = str1;
	// - �迭�� �̸��� �ּҴ�. ��, �̴� �ּҸ� �����ϴ� ����
	// - ������ �迭�� �ּҴ� ������ �Ұ����ϴ�(= ���)

	// 2. strcpy() : String Copy, ���ڿ� ����
	strcpy(str2, str1);

	printf("str1 = %s, str2 = %s\n", str1, str2);

	// �� strcpy_s()
	strcpy_s(str1, 20, "apple");

	printf("str1 = %s\n\n", str1);


	// 3. strcmp() : String Compare, ���ڿ� ��
	// ��ȯ��)
	// 0 : ��ġ
	// 1 : ���� ���ڿ��� ŭ
	// -1 : ���� ���ڿ��� ŭ

	printf("application VS application : %d\n", strcmp("application", "application"));
	printf("banana VS application : %d\n", strcmp("banana", "application"));
	printf("application VS banana : %d\n", strcmp("application", "banana"));
}