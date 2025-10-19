#include <stdio.h>
//2.32
double calculateBMI(double weight, double height) 
{
    return weight / (height * height);
}

void displayBMI() {
    printf("\nBMI ���� :\n");
    printf("�L��: BMI �p�� 18.5\n");
    printf("���`: BMI 18.5 �V 23.9\n");
    printf("�L��: BMI 24 �V 26.9\n");
    printf("���תέD: BMI 27-29.9\n");
    printf("���תέD: BMI 30-34.9\n");
    printf("���תέD: BMI 35�H�W\n");
}

int main() 
{
    double weight, height_cm, height_m;

    printf(" BMI �p�⾹\n");

    printf("�п�J�z���魫�]����^�G");
    if (scanf_s("%lf", &weight) != 1 || weight <= 0)
    {
        printf("�魫���������ơC\n");
        return 1;
    }

    printf("�п�J�z�������]�����^�G");
    if (scanf_s("%lf", &height_cm) != 1 || height_cm <= 0)
    {
        printf("�������������ơC\n");
        return 1;
    }

    height_m = height_cm / 100.0;

    double bmi = calculateBMI(weight, height_m);

    printf("\n�z�� BMI ��: %.2f\n", bmi);

    displayBMI();
    return 0;
}
