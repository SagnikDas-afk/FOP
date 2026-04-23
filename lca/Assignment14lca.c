// Binary to Decimal

#include <stdio.h>
#include <math.h>

int main() {
    int n,dec=0,i=0,rem;
    scanf("%d",&n);
    while (n!=0) {
        rem=n%10;
        dec+=rem*pow(2, i);
        n/=10;
        ++i;
    }
    printf("%d", dec);
    return 0;
}