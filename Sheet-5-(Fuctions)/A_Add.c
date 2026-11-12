#include<stdio.h>

int add(int n1, int n2){
    return n1+n2; 
}

int main()
{
    int x, y;

    scanf("%d %d",&x, &y);

    printf("%d", add(x,y));

    return 0;
}