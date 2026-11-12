#include<stdio.h>

int pwf(int a, int b);

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++){
        
        int n;
        scanf("%d",&n);

        int nu=0,p=0;
        while(n!=0){
            int rem = n%2;
            n/=2;

            if(rem==1){
            nu+=rem*pwf(2,p);
            p++;
            }   
        }

        printf("%d\n",nu);
    }
    return 0;
}

int pwf(int a, int b){
    int o=1;
    for(int i=1; i<=b; i++){
        o*=a;
    }
    return o;
}