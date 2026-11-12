#include<stdio.h>

int main()
{
    int a, b, gcd, r, tmp;
    scanf("%d %d", &a, &b);
    
    while (a!=0)
    {
        r=b%a;
        b=a;
        a=r;
    }
    gcd = b;
    printf("%d", gcd);
    
    // for(int i = 1; i <= a; i++){
    //     if(a%i==0){
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");
    // for(int i = 1; i <= b; i++){
    //     if(b%i==0){
    //         printf("%d ", i);
    //     }
    // }

    // for(int i=1; i<=a&&i<=b; i++){
    //     if(a%i==0 && b%i==0){
    //         gcd = i;
    //     }
    // }

    // printf("%d", gcd);

    return 0;
}