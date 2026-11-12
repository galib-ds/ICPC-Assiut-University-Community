#include<stdio.h>

int main()
{
    long long m,n;
    scanf("%lld %lld", &m, &n);
    
    int ld_m = m%10;
    int ld_n = n%10;

    printf("%d",ld_m+ld_n);
    
    return 0;
}