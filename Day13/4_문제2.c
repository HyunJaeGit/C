#include<stdio.h>

int myStrlen(char str[]) {
	int count = 0;

	for (int i = 0; str[i] != NULL; i++) {
		count++;
	}

	return count;
}

void myStrcpy(char dst[], char src[]) {
	int i;

	for (i = 0; src[i] != NULL; i++) {
		dst[i] = src[i];
	}

	dst[i] = src[i];
}

int myStrcmp(char str1[], char str2[]) {
	for (int i = 0; str1[i] != NULL; i++) {
		if (str1[i] > str2[i]) {
			return 1;
		}
		else if (str1[i] < str2[i]) {
			return -1;
		}
	}

	return 0;
}

int main() {
	// strlen, strcpy, strcmp
	char str1[20] = "Hello World!!!";
	char str2[20] = "application";

	printf("str1의 문자 개수 : %d 개\n", myStrlen(str1));
	printf("str2의 문자 개수 : %d 개\n\n", myStrlen(str2));


	myStrcpy(str2, "banana");

	printf("str2 = %s\n\n", str2);


	printf("application VS application : %d\n", myStrcmp("application", "application"));
	printf("banana VS application : %d\n", myStrcmp("banana", "application"));
	printf("application VS banana : %d\n", myStrcmp("application", "banana"));
}