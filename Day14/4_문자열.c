#include<stdio.h>

int main() {
	// ���ڿ� -> 1���� ���� �迭
	// ���ڿ� �迭 -> 2���� ���� �迭

	char str1[3][10] = {
		{'a', 'p', 'p', 'l', 'e'},
		{'b', 'a', 'n', 'a', 'n', 'a'},
		{'c', 'a', 't'}
	};

	char str2[3][10] = { "apple", "banana", "cat" };


	printf("str2[0] = %s\n", str2[0]);
	printf("str2[0][1] = %c\n", str2[0][1]);
}