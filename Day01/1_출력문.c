#include<stdio.h>

// visual studio는 빌드시 모든 .c파일을 합쳐서 .exe파일을 만든다
// 이때, 각 .c파일에 main이 있으면 main이 중복되서 빌드 에러가 발생
// 즉, 사용하지 않을 파일은 빌드 제외를 해야 올바르게 실행된다
//
// 빌드 제외 방법
// .c 파일 우클릭 -> 속성 -> 빌드에서 제외 -> 예

int main() {
    printf("Hello World!!!\n");
    printf("안녕 세상아!!!\n");
    printf("코드는 main에서 부터 시작하며,\n");
    printf("항상 위에서 아래로 순차적으로 처리한다!!!");

}