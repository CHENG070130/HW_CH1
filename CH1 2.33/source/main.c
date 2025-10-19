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

    printf("每日開車花費計算器\n\n");
    printf("請輸入一天總里程數（公里）：");
    scanf_s("%lf", &total_distance);

    printf("請輸入汽油每公升多少錢：");
    scanf_s("%lf", &fuel_price);

    printf("請輸入平均每公升可行駛多少公里：");
    scanf_s("%lf", &fuel_efficiency);

    printf("請輸入一天的停車費：");
    scanf_s("%lf", &parking_fee);

    printf("請輸入一天的通行費(過路費)：");
    scanf_s("%lf", &toll_fee);

    printf("請輸入共乘人數（包含自己）：");
    scanf_s("%d", &carpool_people);
    if (carpool_people <= 0) carpool_people = 1; 

    double daily_fuel_cost = (total_distance / fuel_efficiency) * fuel_price;

    double total_daily_cost = daily_fuel_cost + parking_fee + toll_fee;

    printf("\n您一天開車的總花費為: %.2f 元\n", total_daily_cost);

    if (carpool_people > 1) 
    {
        double cost_per_person = total_daily_cost / carpool_people;
        printf("如果您與 %d 人共乘，每人每日需支付: %.2f 元\n", carpool_people, cost_per_person);  
    }
    return 0;
}
