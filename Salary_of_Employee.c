#include <stdio.h>
int main(){
    float basic,hra,ta,gross,prof_tax,net;
    printf("Basic Pay: \n");
    scanf("%f",&basic);
    hra=0.10*basic;
    ta=0.05*basic;
    gross=basic+hra+ta;
    prof_tax=0.02*gross;
    net=gross-prof_tax;
    printf("Gross Salary : \n %2f",gross);
    printf("Net Salary : \n%2f",net);
    return 0;
}