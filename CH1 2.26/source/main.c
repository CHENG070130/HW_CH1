#include <stdio.h>
//2.26
int main(void) 
{
    int num1, num2;

    printf("�п�J��Ӿ�ơG");
    scanf_s("%d %d", &num1, &num2);

    if (num2 == 0) 
    {
        printf("���Ƥ��ର 0�C\n");
    }
    else if (num1 % num2 == 0)
    {
        printf("%d �O %d �����ơC\n", num1, num2);
    }
    else
    {
        printf("%d ���O %d �����ơC\n", num1, num2);
    }
    return 0;
}
