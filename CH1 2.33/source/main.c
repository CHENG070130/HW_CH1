#include <stdio.h>
//2.33
int main()
{
    double total_distance;    
    double fuel_price;         
    double fuel_efficiency;    
    double parking_fee;        
    double toll_fee;           
    int carpool_people;        

    printf("�C��}����O�p�⾹\n\n");
    printf("�п�J�@���`���{�ơ]�����^�G");
    scanf_s("%lf", &total_distance);

    printf("�п�J�T�o�C���ɦh�ֿ��G");
    scanf_s("%lf", &fuel_price);

    printf("�п�J�����C���ɥi��p�h�֤����G");
    scanf_s("%lf", &fuel_efficiency);

    printf("�п�J�@�Ѫ������O�G");
    scanf_s("%lf", &parking_fee);

    printf("�п�J�@�Ѫ��q��O(�L���O)�G");
    scanf_s("%lf", &toll_fee);

    printf("�п�J�@���H�ơ]�]�t�ۤv�^�G");
    scanf_s("%d", &carpool_people);
    if (carpool_people <= 0) carpool_people = 1; 

    double daily_fuel_cost = (total_distance / fuel_efficiency) * fuel_price;

    double total_daily_cost = daily_fuel_cost + parking_fee + toll_fee;

    printf("\n�z�@�Ѷ}�����`��O��: %.2f ��\n", total_daily_cost);

    if (carpool_people > 1) 
    {
        double cost_per_person = total_daily_cost / carpool_people;
        printf("�p�G�z�P %d �H�@���A�C�H�C��ݤ�I: %.2f ��\n", carpool_people, cost_per_person);  
    }
    return 0;
}
