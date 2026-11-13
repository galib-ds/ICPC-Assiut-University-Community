#include<stdio.h>

int main()
{
    float n;
    scanf("%f",&n);

    int i=n;
    float f=n;

    float dif = f-i;

    if(dif==0){
        printf("int %d\n",i);
    }else{
        printf("float %d %.3f\n",i,dif);
    }

    return 0;
}