#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ����

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char arr[8];
    scanf("%d",&n);
    scanf("%s",arr);
    for(i=0;i<8;i++)
    {
        arr[i]=arr[i]+n;
    }
    printf("%s",arr);
    return 0;
}
