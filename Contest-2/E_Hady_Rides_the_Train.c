#include<stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);

    long long r,c;

    c=n%4;
    r=n/4;

    if(r%2==0){
       printf("%lld %lld",r,c);
    }else{
        printf("%lld %lld",r,3-c);
    }

    return 0;
}