#include<stdio.h>
#include<stdlib.h> // ※ 여기에 동적 할당 함수있음

// 메모리 할당 기법
// 1. 정적 할당 : 컴파일(기계어로 바꿔주는과정)시 크기가 결정된다. 그 후 실행파일이 된 후 메모리 크기를 변경 불가능
// - 메모리의 데이터/스택 영역에 해당한다
// - 즉, 지역/전역/정적 변수가 이에 해당

// 2. 동적 할당 : 런타임시 크기가 결정됨. 즉, 실행중에도 크기를 유연하게 조절가능
// - 메모리의 힙(Heap) 영역에 해당한다.
// 
// ※ 동적 할당(allocation)은 메모리 영역도 크다.

int main() {
	int n = 10;						// 지역 변수 -> 정적 할당


	// void* malloc(크기) : 
	// - 지정한 크기만큼 heap에 메모리를 할당, 
	// - 그 후 생성된 위치(= 주소)를 반환
	// - void* 는 자신에게 맞는 형태로 형변환 하라는 의미

	int* p = (int*)malloc(4);		// 동적 할당
									// p -> [동적 메모리]

	printf("p = %p\n", p);

	*p = 20;
	printf("*p = %d\n", *p);

	// void free(주소) : 지정 주소에 할당된 공간을 해제 (메모리 누수 방지)
	free(p);
	p = NULL;

}