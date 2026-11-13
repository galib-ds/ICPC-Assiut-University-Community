#include<stdio.h>

int main()
{
    int l1,r1,l2,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);

    int l_max, r_min;
    if(l1>=l2)
        l_max=l1;
    else
        l_max=l2;

    if(r1<=r2)
        r_min=r1;
    else
        r_min=r2;

    if(l_max<=r_min){
        printf("%d %d\n",l_max,r_min);
    }else{
        printf("-1\n");
    }

    return 0;
}