//Leap Year 
#include <stdio.h>

void main()
{
    int year;
    printf("Enter the Year :");
    scanf("%d",&year);
    if ((year%400==0)||(year%4==0 && year%100!=0))
    {
        printf("Its a Leap Year");
    }
    else{
        printf("Its not a Leap Year");
    }
}