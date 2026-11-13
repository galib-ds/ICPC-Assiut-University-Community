#include<stdio.h>

int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    int a1=a%100;
    int b1=b%100;
    int c1=c%100;
    int d1=d%100;

    int mul=a1*b1*c1*d1;
    int num=mul%100;

    if(num==0){
        printf("00\n");
    }else if(num<10){
        printf("0%d\n",num);
    }else{
        printf("%d\n",num);
    }
    
    return 0;
}
