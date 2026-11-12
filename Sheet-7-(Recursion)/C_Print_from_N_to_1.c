#include<stdio.h>

void print_num(int i, int n){
    if(i==n){
        return;
    }

    print_num(i+1,n);
    
    printf("%d",i+1);
    
    if(i!=0){
    printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    print_num(0,n);


    return 0;
}