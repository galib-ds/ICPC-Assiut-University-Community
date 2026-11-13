#include<stdio.h>

int main()
{
    int d;
    scanf("%d",&d);

    int y = d/365;
    d = d-y*365;
    int m = d/30;
    d = d-m*30;

    printf("%d years\n%d months\n%d days\n",y,m,d);

    return 0;
}