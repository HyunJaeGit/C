#include<stdio.h>

// escape sequence : 이스케이프 시퀀스
// - 문자열 내에서 특수한 용도로 사용되는 기호

int main() {
    printf("Hello\nWorld\n");     // \n : new line, 줄바꿈

    printf("Hello\t\tWorld\n");     // \t : tab, 들여쓰기

    printf("저희 수업은 'C언어'입니다\n");
    printf("저희 수업은 \"C언어\"입니다\n");
    // \" : 문자열 묶는 기능을 제거

    printf("공유 폴더는 \\\\192.168.111.17입니다");
    // \\ : 이스케이프 기능을 제거
}