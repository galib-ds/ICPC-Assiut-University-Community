#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<=1){
        return 0;
    }else{
    for(int i=2; i<=n; i++){
    bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;}
        }
        if(isPrime==true){
            printf("%d ",i);
        }
        }
    }
    return 0;
}