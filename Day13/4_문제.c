#include<stdio.h>
#include<string.h>

int main() {
	// 아래 한 쌍의 계정이 있다
	// 사용자에게 ID/PW를 입력 받아서 생성해둔 계정과
	// 정보가 일치하면 '로그인 성공'을 출력
	// 하나라도 다르면 '로그인 실패'를 출력
	char userid[10] = "itbank";
	char userpw[10] = "it";

	char id[10], pw[10];

	printf("ID : ");
	scanf_s("%s", id, 10);

	printf("PW : ");
	scanf_s("%s", pw, 10);

	if (!strcmp(userid, id) && !strcmp(userpw, pw)) {
		printf("%s님 로그인 성공\n", userid);
	}
	else {
		printf("로그인 실패~\n");
	}

}