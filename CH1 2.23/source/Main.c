#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
//2.23
int main() 
{
    int a, b, c;
    printf("��J�T�Ӿ��: ");
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
    printf("�̤j���Ʀr�O: %d\n", largest);
    printf("�̤p���Ʀr�O: %d\n", smallest);
    return 0;
}
