#include<stdio.h>

int main() {
	// �ݺ��� while : ������ ���̸� ���ӹ����� ����. ���ӹ����� ������ �ٽ� ó������

	int i = 1;			// �ʱⰪ

	while (i <= 5) {	// ���ǽ�
		printf("%d : Hello World!!!\n", i);
		i++;			// ������
	}

	printf("�ݺ� �� i = %d\n", i);
}