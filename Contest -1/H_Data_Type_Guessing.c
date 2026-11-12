#include<stdio.h>
#include<limits.h>

int main(){
    long long int n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);
    
    long long int mul = n * k ;

    if(mul % a != 0){
        printf("double");
    }else if(mul / a <= INT_MAX){
        printf("int");
    }else{
        printf("long long");
    }

    return 0;
}