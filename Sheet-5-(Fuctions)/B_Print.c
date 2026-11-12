#include<stdio.h>
void printUpToN(int n){
    for(int i=1; i<n; i++){
        printf("%d ", i);
    }
    printf("%d",n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printUpToN(n);
    return 0;
}