#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    if((a!=0 && b!=0) && (a<=b||a>b) && (b-a==1||a-b==1||a-b==0)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}