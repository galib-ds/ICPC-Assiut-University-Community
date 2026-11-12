#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int tmp = n, rev_n=0, ldgt;

    for(n; n!=0; n/=10){
       ldgt=n%10;
       rev_n=(rev_n*10)+ldgt; 
    }

    // while (n!=0)
    // {
    //    ldgt=n%10;
    //    n/=10;
    //    rev_n=(rev_n*10)+ldgt;
    // }

    printf("%d\n",rev_n);

    if(tmp==rev_n){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}