#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fprintf, fclose �Լ��� ����� ��� ����

int main()
{
    FILE *fp = fopen("hello.txt", "w");     // hello.txt ������ ���� ���(w)�� ����.
          
	char a;                                  // ���� �����͸� ��ȯ
	scanf("%c", %a);
    fprintf(fp, "%c", "", 100);   // ������ �����Ͽ� ���ڿ��� ���Ͽ� ����

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
