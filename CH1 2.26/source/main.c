#include <stdio.h>
//2.26
int main(void) 
{
    int num1, num2;

    printf("叫块ㄢ俱计");
    scanf_s("%d %d", &num1, &num2);

    if (num2 == 0) 
    {
        printf("埃计ぃ 0\n");
    }
    else if (num1 % num2 == 0)
    {
        printf("%d 琌 %d 计\n", num1, num2);
    }
    else
    {
        printf("%d ぃ琌 %d 计\n", num1, num2);
    }
    return 0;
}
