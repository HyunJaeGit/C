#include<stdio.h>

// escape sequence : �̽������� ������
// - ���ڿ� ������ Ư���� �뵵�� ���Ǵ� ��ȣ

int main() {
    printf("Hello\nWorld\n");     // \n : new line, �ٹٲ�

    printf("Hello\t\tWorld\n");     // \t : tab, �鿩����

    printf("���� ������ 'C���'�Դϴ�\n");
    printf("���� ������ \"C���\"�Դϴ�\n");
    // \" : ���ڿ� ���� ����� ����

    printf("���� ������ \\\\192.168.111.17�Դϴ�");
    // \\ : �̽������� ����� ����
}