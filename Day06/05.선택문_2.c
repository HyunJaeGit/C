#include<stdio.h>

int main() {
	// switch ���� ���� ���� ó���� �Ұ��� �ϰų� ��ȿ�����̴�.
	int n;

	printf("���� �Է�(1 ~ 10) ");
	scanf_s("%d", &n);

	switch (n) {
	case 1: 
	case 3:
	case 5:
	case 7:
	case 9:
		printf("Ȧ��\n");
		break;

	case 2:	case 4:	case 6:	case 8:	case 10:
		//if ( n %2 == 0 ) -> if�� ���� ���� ¦���� �ذ�
		printf("¦��\n");
		break;

	default:
		printf("�����ʰ�\n");


	}




}