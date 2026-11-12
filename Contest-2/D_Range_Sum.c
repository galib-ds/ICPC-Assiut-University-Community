#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=1; i<=t; i++){
        
        long long l,r;
        scanf("%lld %lld",&l,&r);
        
        long long c;
        
        if(l<=r){
            c=(r-l)+1;
        }else{
            c=(l-r)+1;
        }

        long long sum = (c*(l+r))/2;

        printf("%lld\n",sum);
        
    }  
    return 0;
}