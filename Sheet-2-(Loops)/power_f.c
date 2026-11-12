#include<stdio.h>

int pwf(int a, int b);

int main()
{   
    int n,p;
    scanf("%d %d",&n,&p);

    int r=pwf(n,p);

    printf("%d",r);
    
    return 0;
}

int pwf(int a, int b){
    int o=1;
    for(int i=1; i<=b; i++){
        o*=a;
    }
    return o;
}