#include<stdio.h>
int main()
{
    int A,B,a1,a2,a3,a4;
    scanf("%d",&A);
    a1 = A/1000;
    a2 = (A/100)%10;
    a3 = (A/10)%10;
    a4 = A%10;
    B = a4*1000+a1*100+a2*10+a3;
    printf("%d",A+B);
}