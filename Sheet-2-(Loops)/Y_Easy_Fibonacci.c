#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    if(n==1){
        printf("%d ",a);
    }else if(n==2){
        printf("%d %d",a,b);
    }else{
        printf("%d %d ",a,b);
        for(int i=2; i<n; i++){
            int fib=a+b;
                a=b;
                b=fib;
            printf("%d ",fib);
        }
    }
    
    return 0;
}