#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
//2.23
int main() 
{
    int a, b, c;
    printf("块俱计: ");
    scanf_s("%d %d %d", &a, &b, &c);
    int largest = a;
    if (b > largest) 
    {
        largest = b;
    }
    if (c > largest) 
    {
        largest = c;
    }
    int smallest = a;
    if (b < smallest)
    {
        smallest = b;
    }
    if (c < smallest)
    {
        smallest = c;
    }
    printf("程计琌: %d\n", largest);
    printf("程计琌: %d\n", smallest);
    return 0;
}
