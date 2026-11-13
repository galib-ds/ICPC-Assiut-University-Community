// #include<stdio.h>

// int main()
// {
//     long long a,b,c,d,mul;
//     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

//     mul=a*b*c*d;

//     int num=0, m=1;
 
//     for(int i=1; i<=2; i++){
//         int l_dgt=mul%10;
//         mul/=10;
        
//         num += l_dgt*m;
//         m*=10;
//     }
    
//     printf("%d\n",num);

//     return 0;
// }

#include<stdio.h>

int main()
{
    int mul;
    scanf("%d",&mul);

    int num=0,m=1;

    while(mul!=0){
        int l_dgt=mul%10;
        mul/=10;
        
        num = num+l_dgt*m;
        m*=10;
    }

    printf("%d\n",num);

    return 0;
}