#include<stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int menu;


	printf("���� �� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &num1, &num2);
	
	printf("1. ���� \n");
	printf("2. ���� \n");
	printf("3. ���� \n");
	printf("4. ������ \n");


	printf("\n\n������ ���ڸ� �����ϸ� ���ڿ� �´� ������ ���� (1~4) \n\n");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1 :
		printf("result = %d\n", (num1 + num2));
		break;

	case 2:
		printf("result = %d\n", (num1 - num2));
		break;

	case 3:
		printf("result = %d\n", (num1 * num2));
		break;

	case 4:
		printf("result = %d\n", (num1 / num2));
		break;



	}


}