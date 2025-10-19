#include <stdio.h>
//2.31
int main() 
{
    int i;
    printf("數字\t平方\t立方\n");

    for (i = 0; i <= 10; i++) 
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}
