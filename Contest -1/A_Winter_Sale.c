#include<stdio.h>

int main(){
    float d,dp;
    scanf("%f %f", &d, &dp);
    printf("%.2f", dp*(100/(100 - d)));
    return 0;
}
