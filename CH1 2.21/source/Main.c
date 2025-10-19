#include <stdio.h>
//2.21
int main() 
{
    int height = 9;
    int width = 9;
    int space = 10;
    int i, j;

    int center = width / 2;
    int mid = height / 2;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                printf("*");
            else
                printf(" ");
        }
        for (j = 0; j < space; j++) 
            printf(" ");

        for (j = 0; j < width; j++)
        {
            if ((i == 0 || i == height - 1) && (j >= center - 1 && j <= center + 1))
                printf("*");
            else if (i == 1 && (j == center - 3 || j == center + 3))
                printf("*");
            else if (i == height - 2 && (j == center - 3 || j == center + 3))
                printf("*");
            else if (i >= 2 && i <= height - 3 && (j == 0 || j == width - 1))
                printf("*");
            else
                printf(" ");
        }
        for (j = 0; j < space; j++) 
            printf(" ");

        if (i <= 2) 
        {
            int k = i;
            int left = center - k;
            int right = center + k;
            for (j = 0; j < width; j++) 
            {
                if (j >= left && j <= right) 
                    printf("*");
                else 
                    printf(" ");
            }
        }
        else
        {
            for (j = 0; j < width; j++) 
            {
                if (j == center) 
                    printf("*");
                else 
                    printf(" ");
            }
        }
        for (j = 0; j < space; j++) 
            printf(" ");

        for (j = 0; j < width; j++) 
        {
            if (i <= mid) 
            {
                if (j == mid - i || j == mid + i)
                    printf("*");
                else 
                    printf(" ");
            }
            else
            {
                if (j == i - mid || j == width - 1 - (i - mid))
                    printf("*");
                else 
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}