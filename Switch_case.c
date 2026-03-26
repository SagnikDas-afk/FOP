#include<stdio.h>
int main()
{
    char ch;
    int n1,n2;
    printf("A for addition , B for subraction, C for divison, D for Multiplication\n");
    printf("Enter the character \n");
    scanf("%s",&ch);
    printf("Enter the n1 and n2 value\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    switch (ch)
    {
        case 'A':
            printf("Addition of two no. %d\n",(n1+n2));
            break;
        case 'B':
            printf("Subraction of two no. %d\n",(n1-n2));
            break;
        case 'C':
            printf("Divison of two no. %d\n",(n1/n2));
            break;
        case 'D':
            printf("Multiplication of two no. %d\n",(n1*n2));
            break;
        default:
            printf("Wrong Choice");
    }
    return 0;
}