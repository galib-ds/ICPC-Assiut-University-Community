#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++){
        
        long long n;
        scanf("%lld",&n);

        long long cnt=0;
        
        while (n!=0)
        {
            long long rem = n%2;
            if(rem==0){
                cnt++;
            }
            n/=2;
        }
        printf("%lld ",cnt); 
    }
    
    return 0;
}