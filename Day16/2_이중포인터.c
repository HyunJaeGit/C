#include<stdio.h>

// ������ ���� : �ּҸ� �����ϴ� ����
// ���� ������ ���� : '������ ������ �ּ�'�� �����ϴ� ����

int main() {
	int n = 10;
	int* p = &n;		// p -> n
	int** pp = &p;		// pp -> p

						// ��, pp -> p -> n

	printf("n = %d\n", n);
	printf("p = %p\n", p);
	printf("pp = %p\n\n", pp);

	printf("*p = %d\n", *p);
	printf("*pp = %p\n\n", *pp);

	printf("**pp = %d\n", **pp);
}