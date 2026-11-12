#include<stdio.h>

int main()
{
    int N,A,B;
    scanf("%d %d %d", &N, &A, &B);
    int sum=0;
    for(int i=1; i<=N; i++){
        int num=i;
        int sum_dgt=0;
        while(num!=0){
            sum_dgt+=num%10;
            num/=10;
        }
        if(sum_dgt>=A && sum_dgt<=B){
            sum+=i;
        }
    } 
    printf("%d", sum);
    return 0;
}