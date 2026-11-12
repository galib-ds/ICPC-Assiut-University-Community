#include<stdio.h>

int main()
{
    int a, b, count=0;
    scanf("%d %d", &a, &b);
    
    for(int i=a; i<=b; i++){

        int num=i, ldgt;

        while(num!=0){
            ldgt=num%10;
            
            if(ldgt==4||ldgt==7){
                num/=10;
            }else{
                break;
            }
        }
        if(num==0){
            printf("%d ", i);
            count++;
        }
    }
    
    if(count==0){
        printf("-1");
    }
    
    return 0;
}