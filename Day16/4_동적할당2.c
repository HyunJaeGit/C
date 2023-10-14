#include<stdio.h>
#include<stdlib.h>

int main() {
	// 다양한 타입의 동적할당
	char* ch = (char*)malloc(1); 
	short* sh = (short*)malloc(2);
	int* it = (int*)malloc(4);
	long long* ll = (long long*)malloc(8);
	float* fl = (float*)malloc(4);
	double* db = (double*)malloc(8);

	// # 크기를 모르면 sizeof()를 쓴다 (구조체)
	// int* n = (int*)malloc(sizeof(int));		

	*ch = 'A';
	*sh = 30000;
	*it = 2000000000;
	*ll = 3000000000;
	*fl = 3.141592;
	*db = 3.1234567890;

	printf("*ch = %c\n", *ch);
	printf("*sh = %d\n", *sh);
	printf("*it = %d\n", *it);
	printf("*ll = %lld\n", *ll);
	printf("*fl = %f\n", *fl);
	printf("*db = %lf\n", *db);

	free(ch);	ch = NULL;
	free(sh);	sh = NULL;
	free(it);	it = NULL;
	free(ll);	ll = NULL;
	free(fl);	fl = NULL;
	free(db);	db = NULL;

}