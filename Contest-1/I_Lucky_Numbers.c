#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int l_dgt = n%10;
    int f_dgt = n/10;

    if(l_dgt%f_dgt==0||f_dgt%l_dgt==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}