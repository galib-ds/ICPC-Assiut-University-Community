#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=n*4;
    for(int j=1; j<=k; j++){
        if(j%4==0){
        printf("PUM\n");
        continue;
        }
        printf("%d ",j);
    }
    return 0;
}