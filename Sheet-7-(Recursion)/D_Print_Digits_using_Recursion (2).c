#include<stdio.h>

void print_dgt(int num){
    
    if(num==0){
        return;
    }

    int l_dgt = num%10;  
    print_dgt(num/10);
    printf("%d ", l_dgt);
}

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);

        if(n==0){
            printf("0");
        }else{
            print_dgt(n);
        }
        printf("\n");
    }
    
    return 0;
}