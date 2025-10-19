#include <stdio.h>
//2.32
double calculateBMI(double weight, double height) 
{
    return weight / (height * height);
}

void displayBMI() {
    printf("\nBMI 分類 :\n");
    printf("過輕: BMI 小於 18.5\n");
    printf("正常: BMI 18.5 – 23.9\n");
    printf("過重: BMI 24 – 26.9\n");
    printf("輕度肥胖: BMI 27-29.9\n");
    printf("中度肥胖: BMI 30-34.9\n");
    printf("重度肥胖: BMI 35以上\n");
}

int main() 
{
    double weight, height_cm, height_m;

    printf(" BMI 計算器\n");

    printf("請輸入您的體重（公斤）：");
    if (scanf_s("%lf", &weight) != 1 || weight <= 0)
    {
        printf("體重必須為正數。\n");
        return 1;
    }

    printf("請輸入您的身高（公分）：");
    if (scanf_s("%lf", &height_cm) != 1 || height_cm <= 0)
    {
        printf("身高必須為正數。\n");
        return 1;
    }

    height_m = height_cm / 100.0;

    double bmi = calculateBMI(weight, height_m);

    printf("\n您的 BMI 為: %.2f\n", bmi);

    displayBMI();
    return 0;
}
