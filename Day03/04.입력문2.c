#include<stdio.h>

int main() {
	int it;			// ����
	double db;		// �Ǽ�
	char str[10];	// ���ڿ�
	char ch;		// ����


	printf("���� �Է� :");
	scanf("%c", &ch);

	printf("���� �Է� :");
	scanf("%d", &it);

	printf("���� �Է� :");
	scanf("%lf", &db);

	printf("���� �Է� :");
	scanf("%s", str);		// �迭�� �̸���ü�� �ּҶ� &�� ������ �ʴ´�.

	printf("\n ch = %c, it = %d\n", ch, it);
	printf("\n db = %.2lf, str = %s\n", db, str);

}