#include<stdio.h>

int main() {
	// 문자열 -> 1차원 문자 배열
	// 문자열 배열 -> 2차원 문자 배열

	char str1[3][10] = {
		{'a','p','p','l','e'},
		{'b','a','n','a','n','a'},
		{'c','a','t'},


	};

	char str2[3][10] = { "apple", "banana", "cat"};

	printf("str2[0] = %s\n", str2[0]);
	printf("str2[0][1] = %c\n", str2[0][1]);

}