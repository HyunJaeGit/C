#include<stdio.h>

//���ù� : ���ǹ��� ��������, ������ �ƴ� ������ ���� ���� �ڵ带 �б�

int main() {
	int menu;

	printf("���� �Է� (1 ~ 3)");
	scanf_s("%d", &menu);

	switch (menu) {		// switch (��) : ���� ������ ����
	case 1 :
		printf("1�� ����~\n");
		break;			// break : ����� '���' Ż��

	case 2 :
		printf("2�� ����~\n");
		break;

	case 3 :
		printf("3�� ����~\n");
		break;

	default :
		printf("���� �޴��Դϴ�\n");

	}

	printf("����~\n");

	//if (menu == 1);			-> if������ ��ü����( switch�� �ӵ��� ���ݴ� ����)
	//else if (menu == 2);		-> BUT, ���������̾ƴ� menu >=20 �̷����� ���������� ����
	//else if (menu == 3);
	//else


}