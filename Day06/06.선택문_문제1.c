#include<stdio.h>

int main() {

	int num;

	printf("�� �� ����ġ�� �����ðڽ��ϱ�?	(1,2,3)\n\n ");
	scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("���� ON \n\n");
		break;

	case 2:
		printf("���� OFF \n\n");
		break;

	case 3:
		printf("���� ���� \n\n");
		break;

	default :
		printf("����ġ ��ȣ ����\n\n");
	}

	printf("�����մϴ�.\n");

}