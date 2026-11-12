#include<stdio.h>

long long fact(long long num){
    if(num==0){
        return 1;
    }
    return num*fact(num-1);
}

int main()
{
    long long n;
    scanf("%lld",&n);

    printf("%lld",fact(n));

    return 0;
}