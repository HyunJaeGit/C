#include<stdio.h>
#include<string.h>

int main() {
	// �Ʒ� �� ���� ������ �ִ�
	// ����ڿ��� ID/PW�� �Է� �޾Ƽ� �����ص� ������
	// ������ ��ġ�ϸ� '�α��� ����'�� ���
	// �ϳ��� �ٸ��� '�α��� ����'�� ���
	char userid[10] = "itbank";
	char userpw[10] = "it";

	char id[10], pw[10];

	printf("ID : ");
	scanf_s("%s", id, 10);

	printf("PW : ");
	scanf_s("%s", pw, 10);

	if (!strcmp(userid, id) && !strcmp(userpw, pw)) {
		printf("%s�� �α��� ����\n", userid);
	}
	else {
		printf("�α��� ����~\n");
	}

}