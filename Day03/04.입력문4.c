#include<stdio.h>

// scanf()�� ����� �ӵ� ������ ���ؼ� buffer��� ������ ����Ѵ�.
// - buffer�� �����͸� ��Ƽ� �����ϱ����� �ӽ� ����
// - buffer �о��� SPACE�� ENTER�� ����
int main() {
	int n1, n2;

	printf(" �� ���� �Է� : ");
	scanf_s("%d %d", &n1, &n2);

	printf("n1 = %d, n2 = %d\n", n1, n2);

	rewind(stdin); // �Է� ���۸� ��� �����~

	int n3, n4;

	printf(" �ٽ� �� ���� �Է� :");
	scanf_s("%d %d", &n3, &n4);

	printf("n3 = %d, n4 = %d\n", n3, n4);

}