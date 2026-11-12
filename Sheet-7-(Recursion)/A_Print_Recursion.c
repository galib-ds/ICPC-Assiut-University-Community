#include<stdio.h>

void print_text(int i, int n){
    if(i == n){
        return;
    }
    printf("I love Recursion\n");
    print_text(i+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);

    print_text(0,n);

    return 0;
}