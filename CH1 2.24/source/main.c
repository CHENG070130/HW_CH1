#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
//2.24
int main()
{
    int num;
    printf("��J�@�Ӿ��: ");
    scanf_s("%d", &num);

    if (num % 2 == 0) 
    {
        printf("%d �O����.\n", num);
    }
    else
    {
        printf("%d �O�_��.\n", num);
    }
    return 0;
}
