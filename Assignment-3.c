#include<stdio.h>
//Multiplication Table
void main(){
    int i=0;
    int t,m;
    printf("Enter the number to find a multiplication table\n");
    scanf("%d",&t);
    for(i=0;i<=10;i++)
    {
        m=t*i;
        printf("%d x %d = %d\n",t,i,m);
    }
}