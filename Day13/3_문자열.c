#include<stdio.h>

int main() {
	// C���� ���ڿ� �ڷ����� ����
	// - char(����) Ÿ���� �迭�� ����ؼ� ���ڿ��� ����

	char str1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char str2[6] = "Hello";

	// �� \0 (= NULL)�� �ڵ����� ä�����Ƿ� �ۼ����� �ʾƵ� ��
	printf("str1 = %s, str2 = %s\n\n", str1, str2);

	printf("str1[0] = %c, str2[0] = %c\n\n", str1[0], str2[0]);


	// �� %s�� 0�� index���� \0���� ���ڿ��� �ν�
	// ��, �ݺ����� ġ�� �Ʒ��� ����
	for (int i = 0; str1[i] != NULL; i++) {
		printf("%c", str1[i]);
	}
	printf("\n");

}